
#[derive(Debug, PartialEq)]
pub struct Ast {
    
}

#[derive(Debug, PartialEq)]
pub struct Fn {
    pub sig : Signature,
}

#[derive(Debug, PartialEq)]
pub struct Block {
    pub stmts : Vec<Stmt>,
}

#[derive(Debug, PartialEq)]
pub struct Stmt {
    pub kind : StmtKind,
}

#[derive(Debug, PartialEq)]
pub enum StmtKind {
    
}

#[derive(Debug, PartialEq)]
pub struct Signature {
    pub name : String,
    pub ty: Ty,
}

#[derive(Debug, PartialEq)]
pub struct Ty {
    pub kind : TyKind,
}

#[derive(Debug, PartialEq)]
pub enum TyKind {
    Path(Path),
}

#[derive(Debug, PartialEq)]
pub struct Path {
    pub segments : Vec<Segment>,
}

#[derive(Debug, PartialEq)]
pub struct Segment {
    pub name : String,
}