//=======================================================================
//class Expression
//      Specification and implementation
//-----------------------------------------------------------------------
// Julien DeAntoni (inspired from Jean-Paul Rigault course)
// April 2010
//=======================================================================


#include "Unary_Expr.h"

int Unary_Expr::eval()const{
    return op.eval();
}

Unary_Expr::~Unary_Expr(){
    delete &op;
}

Expr* Unary_Expr::clone() const{ 
    return new Unary_Expr(op);
}