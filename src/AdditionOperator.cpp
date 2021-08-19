/**
 * @file AdditionOperator.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-08-19
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "AdditionOperator.h"

namespace Calculator
{
    AdditionOperator::AdditionOperator() : 
        IBinaryOperator(OpSymbol("+", OPORDER::FIVE, true)) {}

    AdditionOperator::~AdditionOperator() {}

    double AdditionOperator::calculate(double left, double right)
    { 
        return left + right; 
    } 
}