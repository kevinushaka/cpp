//=======================================================================
//class Expression
//      Specification and implementation
//-----------------------------------------------------------------------
// Julien DeAntoni (inspired from Jean-Paul Rigault course)
// April 2010
//=======================================================================


#include "Binary_Expr.h"


int Binary_Expr::eval()const{
    return opl.eval()*opr.eval();
}

Binary_Expr::~Binary_Expr(){
    delete &opl;
    delete &opr;
}

Expr* Binary_Expr::clone() const{
    return new Binary_Expr(opl,opr);
}
