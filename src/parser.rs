use nom::character::complete::{multispace0, multispace1, char, anychar};
use nom::combinator::{not, map_parser, recognize};
use nom::branch::{alt};
use nom::{Err, IResult};
use nom::bytes::complete::{tag, take_while};
use nom::sequence::delimited;

use crate::ast::*;

pub fn parse_fn(s: &str) -> IResult<&str, Fn> {
    let (s, sig) = parse_signature(s)?;
    let (s, _) = lexeme(char('{'))(s)?;
    let (s, _) = lexeme(char('}'))(s)?;
    Ok((s, Fn { sig }))
}

pub fn parse_signature(s: &str) -> IResult<&str, Signature> {
    let (s, _) = keyword("fn")(s)?;
    let (s, name) = lexeme(parse_identifier)(s)?;
    let (s, _) = char('(')(s)?;
    let (s, _) = char(')')(s)?;
    let (s, _) = keyword("->")(s)?;
    let (s, ty) = lexeme(parse_ty)(s)?;

    Ok((s, Signature { name, ty }))
}

pub fn parse_ty(s: &str) -> IResult<&str, Ty> {
    let (s, ty) = take_while(|c : char| c.is_ascii_lowercase() || c == '_')(s)?;
    Ok((s, Ty { kind: TyKind::Path(Path { segments: vec![Segment { name: ty.to_string() }] }) }))
}

pub fn parse_identifier(s: &str) -> IResult<&str, String> {
    let (s, h) = take_while(|c : char| c.is_ascii_lowercase() || c == '_')(s)?;
    let (s, hs) = take_while(|c : char| c.is_alphanumeric() || c == '_')(s)?;
    Ok((s, format!("{}{}", h, hs)))
}

pub fn keyword<'a>(keyword: &'a str) -> impl std::ops::Fn(&'a str) -> IResult<&'a str, &'a str> {
    move |s: &str| {
        let (s, _) = multispace0(s)?;
        let (s, _) = tag(keyword)(s)?;
        let (s, _) = alt((
            multispace1,
            recognize(not(anychar)),
        ))(s)?;
        Ok((s, &keyword))
    }
}

pub fn lexeme<'a, F, O>(f: F) -> impl std::ops::Fn(&'a str) -> IResult<&'a str, O>
where
    F: std::ops::Fn(&'a str) -> IResult<&'a str, O>,
{
    delimited(multispace0, f, multispace0)
}

// TODO;エラーの内容を表示
macro_rules! assert_fail {
    ($a:expr) => {
        assert!($a.is_err());
    };
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_parse_signature() {
        assert_eq!(parse_signature("fn foo() -> int"), Ok(("", Signature { name: "foo".to_string(), ty: Ty { kind: TyKind::Path(Path { segments: vec![Segment { name: "int".to_string() }] }) } })));
    }

    #[test]
    fn test_keyword() {
        assert_eq!(keyword("fn")("fn "), Ok(("", "fn")));
        assert_eq!(keyword("fn")(" fn"), Ok(("", "fn")));
        assert_fail!(keyword("fn")("fn_"));
    }

    #[test]
    fn test_parse_ty() {
        assert_eq!(parse_ty("int"), Ok(("", Ty { kind: TyKind::Path(Path { segments: vec![Segment { name: "int".to_string() }] }) })));
    }
}