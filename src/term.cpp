#include <term.hpp>

#include <vector>
#include <string>
#include <tuple>
#include <iostream>
#include <algorithm>
#include <stdexcept>

std::unique_ptr<expr_t> app(std::unique_ptr<expr_t> e1, std::unique_ptr<expr_t> e2) {
    return std::make_unique<expr_t>(app_t{std::move(e1), std::move(e2)});
}

std::unique_ptr<expr_t> lambda(std::string e, std::unique_ptr<expr_t> body) {
    return std::make_unique<expr_t>(lambda_t{e, std::move(body)});
}

std::unique_ptr<expr_t> let(std::string e, std::unique_ptr<expr_t> e1, std::unique_ptr<expr_t> e2) {
    return std::make_unique<expr_t>(let_t{e, std::move(e1), std::move(e2)});
}

std::unique_ptr<expr_t> var(std::string id) {
    return std::make_unique<expr_t>(var_t{id});
}

std::unique_ptr<expr_t> lit(std::unique_ptr<value_t> value) {
    return std::make_unique<expr_t>(lit_t{std::move(value)});
}

std::string expr_t::to_string() {
    return std::visit([](auto&& arg) -> std::string {
        using T = std::decay_t<decltype(arg)>;
        if constexpr (std::is_same_v<T, app_t>) {
            return "app " + arg.e1->to_string() + " " + arg.e2->to_string();
        } else if constexpr (std::is_same_v<T, lambda_t>) {
            return "lambda " + arg.e + " -> " + arg.body->to_string();
        } else if constexpr (std::is_same_v<T, let_t>) {
            return "let " + arg.id + " = " + arg.e1->to_string() + " in " + arg.e2->to_string();
        } else if constexpr (std::is_same_v<T, var_t>) {
            return "var " + arg.id;
        } else if constexpr (std::is_same_v<T, lit_t>) {
            return "lit " + std::visit([](auto&& val) -> std::string {
                using V = std::decay_t<decltype(val)>;
                if constexpr (std::is_same_v<V, int_v>) {
                    return std::to_string(val.value);
                } else if constexpr (std::is_same_v<V, string_v>) {
                    return val.value;
                }
            }, arg.value->inner);
        }
    }, inner);
}

using uenv = std::vector<std::tuple<std::string, std::string>>;

std::string gen_uid(std::string id) {
    static int counter = 0;
    return id + std::to_string(counter++);
}

std::unique_ptr<expr_t> _uniquify(std::unique_ptr<expr_t> e, uenv uv) {
    return std::visit([&uv](auto&& arg) -> std::unique_ptr<expr_t> {
        using T = std::decay_t<decltype(arg)>;
        if constexpr (std::is_same_v<T, app_t>) {
            auto e1 = _uniquify(std::move(arg.e1), uv);
            auto e2 = _uniquify(std::move(arg.e2), uv);
            return app(std::move(e1), std::move(e2));
        } else if constexpr (std::is_same_v<T, lambda_t>) {
            auto ue = gen_uid(arg.e);
            uenv lex_uv = uv;
            lex_uv.emplace_back(std::make_tuple(arg.e, ue));
            auto body = _uniquify(std::move(arg.body), lex_uv);
            return lambda(ue, std::move(body));
        } else if constexpr (std::is_same_v<T, let_t>) {
            std::string uid = gen_uid(arg.id);
            uenv lex_uv = uv;
            lex_uv.emplace_back(std::make_tuple(arg.id, uid));
            auto e1 = _uniquify(std::move(arg.e1), lex_uv);
            auto e2 = _uniquify(std::move(arg.e2), lex_uv);
            return let(uid, std::move(e1), std::move(e2));
        } else if constexpr (std::is_same_v<T, var_t>) {
            // スコープの階層が近い順に変数を探すために逆順で探査していることに注意
            auto it = std::find_if(uv.rbegin(), uv.rend(), [&](const auto& pair) {
                return std::get<0>(pair) == arg.id;
            });
            if (it != uv.rend()) {
                return var(std::get<1>(*it));
            } else {
                throw std::runtime_error("Variable not found in environment");
            }
        } else if constexpr (std::is_same_v<T, lit_t>) {
            return lit(std::make_unique<value_t>(arg.value->inner));
        }
    }, e->inner);
}

std::unique_ptr<expr_t> uniquify(std::unique_ptr<expr_t> e) {
    return _uniquify(std::move(e), {});
}