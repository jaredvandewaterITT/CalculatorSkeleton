/**
 * @file MultiplicationOperator.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-08-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>

#include "MultiplicationOperator.h"

namespace Calculator
{
    const std::string MultiplicationOperator::OPERATOR = "*";

    MultiplicationOperator::MultiplicationOperator() : 
        IBinaryOperator(IOperation::PRIORITY::THREE, MultiplicationOperator::OPERATOR, true) {}

    MultiplicationOperator::~MultiplicationOperator() {}

    double MultiplicationOperator::calculate(double left, double right)
    {
        return left * right;
    }
}