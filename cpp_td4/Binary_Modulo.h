
#ifndef _BINARY_MOD_H_
#define _BINARY_MOD_H_

#include "Binary_Expr.h"


class Binary_Modulo : public Binary_Expr
{
public:
    Binary_Modulo(Expr& pe1, Expr& pe2) : Binary_Expr(pe1, pe2) {}

    virtual int eval()const{return opl->eval()%opr->eval();}
};


#endif
