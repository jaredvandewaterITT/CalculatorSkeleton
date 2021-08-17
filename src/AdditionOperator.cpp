/**
 * @file AdditionOperator.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-08-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>

#include "AdditionOperator.h"

namespace Calculator
{
    const std::string AdditionOperator::OPERATOR = "+";

    AdditionOperator::AdditionOperator() : 
        IBinaryOperator(IOperation::PRIORITY::FOUR, AdditionOperator::OPERATOR, true) {}

    AdditionOperator::~AdditionOperator() {}

    double AdditionOperator::calculate(double left, double right)
    {
        return left + right;
    }
}