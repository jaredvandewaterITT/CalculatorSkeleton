/**
 * @file DivisionOperator.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-08-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>

#include "DivisionOperator.h"

namespace Calculator
{
    const std::string DivisionOperator::OPERATOR = "/";

    DivisionOperator::DivisionOperator() : 
        IBinaryOperator(IOperation::PRIORITY::THREE, DivisionOperator::OPERATOR) {}

    DivisionOperator::~DivisionOperator() {}

    double DivisionOperator::calculate(double left, double right)
    {
        return left / right;
    }
}