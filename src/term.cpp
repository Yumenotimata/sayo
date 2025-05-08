#include <term.hpp>

#include <vector>
#include <string>
#include <tuple>
#include <algorithm>

std::unique_ptr<expr_t> app(std::unique_ptr<expr_t> e1, std::unique_ptr<expr_t> e2) {
    return std::make_unique<expr_t>(app_t{std::move(e1), std::move(e2)});
}

std::unique_ptr<expr_t> lambda(std::string e, std::unique_ptr<expr_t> body) {
    return std::make_unique<expr_t>(lambda_t{e, std::move(body)});
}

std::unique_ptr<expr_t> let(std::string id, std::unique_ptr<expr_t> e1, std::unique_ptr<expr_t> e2) {
    return std::make_unique<expr_t>(let_t{id, std::move(e1), std::move(e2)});
}

std::unique_ptr<expr_t> var(std::string id) {
    return std::make_unique<expr_t>(var_t{id});
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
        }
    }, inner);
}

std::unique_ptr<uexpr_t> uapp(std::unique_ptr<uexpr_t> e1, std::unique_ptr<uexpr_t> e2) {
    return std::make_unique<uexpr_t>(uapp_t{std::move(e1), std::move(e2)});
}

std::unique_ptr<uexpr_t> ulambda(std::string e, std::unique_ptr<uexpr_t> body) {
    return std::make_unique<uexpr_t>(ulambda_t{e, std::move(body)});
}

std::unique_ptr<uexpr_t> ulet(std::string id, std::unique_ptr<uexpr_t> e1, std::unique_ptr<uexpr_t> e2) {
    return std::make_unique<uexpr_t>(ulet_t{id, std::move(e1), std::move(e2)});
}

std::unique_ptr<uexpr_t> uvar(std::string id) {
    return std::make_unique<uexpr_t>(uvar_t{id});
}

std::string uexpr_t::to_string() {
    return std::visit([](auto&& arg) -> std::string {
        using T = std::decay_t<decltype(arg)>;
        if constexpr (std::is_same_v<T, uapp_t>) {
            return "uapp " + arg.e1->to_string() + " " + arg.e2->to_string();
        } else if constexpr (std::is_same_v<T, ulambda_t>) {
            return "ulambda " + arg.e + " -> " + arg.body->to_string();
        } else if constexpr (std::is_same_v<T, ulet_t>) {
            return "ulet " + arg.id + " = " + arg.e1->to_string() + " in " + arg.e2->to_string();
        } else if constexpr (std::is_same_v<T, uvar_t>) {
            return "uvar " + arg.id;
        }
    }, inner);
}

using uid = std::string;
using uenv = std::vector<std::tuple<std::string, std::string>>;

std::string gen_uid(std::string id) {
    static int counter = 0;
    return id + std::to_string(counter++);
}

std::unique_ptr<uexpr_t> uniqify_(std::unique_ptr<expr_t> e, uenv uv) {
    return std::visit([&](auto&& arg) -> std::unique_ptr<uexpr_t> {
        using T = std::decay_t<decltype(arg)>;
        if constexpr (std::is_same_v<T, app_t>) {
            return uapp(uniqify_(std::move(arg.e1), uv),
                        uniqify_(std::move(arg.e2), uv));
        } else if constexpr (std::is_same_v<T, lambda_t>) {
            uenv lex_uv = uv;
            uid new_e = gen_uid(arg.e);
            lex_uv.push_back(std::make_tuple(arg.e, new_e));
            return ulambda(new_e,
                           uniqify_(std::move(arg.body), lex_uv));
        } else if constexpr (std::is_same_v<T, let_t>) {
            uenv lex_uv = uv;
            lex_uv.push_back(std::make_tuple(arg.id, gen_uid(arg.id)));
            auto new_e1 = uniqify_(std::move(arg.e1), lex_uv);
            auto new_e2 = uniqify_(std::move(arg.e2), lex_uv);
            return ulet(arg.id, std::move(new_e1), std::move(new_e2));
        } else if constexpr (std::is_same_v<T, var_t>) {
            auto it = std::find_if(uv.begin(), uv.end(),
                                   [&](const auto& pair) { return std::get<0>(pair) == arg.id; });
            if (it != uv.end()) {
                return uvar(std::get<1>(*it));
            } else {
                throw std::runtime_error("Variable not found in environment");
            }
        }
    }, e->inner);
}

std::unique_ptr<uexpr_t> uniqify(std::unique_ptr<expr_t> e) {
    uenv uv;
    return uniqify_(std::move(e), uv);
}