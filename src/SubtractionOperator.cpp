/**
 * @file SubtractionOperator.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-08-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>

#include "SubtractionOperator.h"

namespace Calculator
{
    const std::string SubtractionOperator::OPERATOR = "-";

    SubtractionOperator::SubtractionOperator() : 
        IBinaryOperator(IOperation::PRIORITY::FOUR, SubtractionOperator::OPERATOR) {}

    SubtractionOperator::~SubtractionOperator() {}

    double SubtractionOperator::calculate(double left, double right)
    {
        return left - right;
    }
}