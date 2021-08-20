/**
 * @file ExponentOperator.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-08-19
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <tgmath.h> 

#include "ExponentOperator.h"
#include "OperatorFactory.h"

namespace Calculator
{
    bool ExponentOperator::REGISTERED = OperatorFactory::RegisterOperator(new ExponentOperator);

    ExponentOperator::ExponentOperator() : 
        IBinaryOperator(OpSymbol("^", OPORDER::THREE, true)) {}

    ExponentOperator::~ExponentOperator() {}

    double ExponentOperator::calculate(double left, double right)
    { 
        return pow(left, right); 
    } 
}