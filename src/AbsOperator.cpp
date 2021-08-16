/**
 * @file AbsOperator.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-08-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "AbsOperator.h"

namespace Calculator
{
    const std::string AbsOperator::OPERATOR = "abs";

    AbsOperator::AbsOperator() : 
        IUnaryOperator(AbsOperator::OPERATOR) {}

    AbsOperator::~AbsOperator() {}

    double AbsOperator::calculate(double input)
    {
        return (input < 0) ? (-1*input) : input;
    }
}