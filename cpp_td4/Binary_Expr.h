//=======================================================================
//class Expression
//      Specification and implementation
//-----------------------------------------------------------------------
// Julien DeAntoni (inspired from Jean-Paul Rigault course)
// April 2010
//=======================================================================


#ifndef _BINARY_EXPR_H_
#define _BINARY_EXPR_H_

#include "Expr.h"

class Binary_Expr : public Expr
{
protected:
    Expr* opl;
    Expr* opr;
public:
    Binary_Expr(Expr& pe1, Expr& pe2) : opl(pe1.clone()), opr(pe2.clone()) {}
    virtual int eval()const;
    ~Binary_Expr();
    Binary_Expr* clone() const{ return new Binary_Expr(*opl,*opr);}
};

#endif
