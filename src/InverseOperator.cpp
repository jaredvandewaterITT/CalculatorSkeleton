/**
 * @file InverseOperator.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-08-19
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include  <tgmath.h>

#include "InverseOperator.h"

namespace Calculator
{
    InverseOperator::InverseOperator() :
        IUnaryOperator(OpSymbol("inv", OPORDER::THREE)) {}

    InverseOperator::~InverseOperator() {}

    double InverseOperator::calculate(double input) 
    { 
        return  1 / input;
    }
}