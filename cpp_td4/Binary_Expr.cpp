//=======================================================================
//class Expression
//      Specification and implementation
//-----------------------------------------------------------------------
// Julien DeAntoni (inspired from Jean-Paul Rigault course)
// April 2010
//=======================================================================


#include "Binary_Expr.h"


int Binary_Expr::eval()const{
    return 0;
}

Binary_Expr::~Binary_Expr(){
    delete opl;
    delete opr;
}