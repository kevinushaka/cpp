//=======================================================================
//class Expression
//      Specification and implementation
//-----------------------------------------------------------------------
// WTFPL
// Julien DeAntoni (inspired from Jean-Paul Rigault course)
// April 2010
//=======================================================================


#ifndef _UNARY_EXPR_H_
#define _UNARY_EXPR_H_

#include "Expr.h"

class Unary_Expr : public Expr
{
protected:
    Expr* op;
public:
    Unary_Expr(Expr& pe) : op(pe.clone()) {}

    virtual int eval()const;

    ~Unary_Expr();

    virtual Unary_Expr* clone() const{ return new Unary_Expr(*op);}
};



#endif
