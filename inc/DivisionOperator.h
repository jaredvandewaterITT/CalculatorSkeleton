/**
 * @file DivisionOperator.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-08-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef DIVISIONOPERATOR_H
#define DIVISIONOPERATOR_H

#include "IBinaryOperator.h"

namespace Calculator
{
    class DivisionOperator : public IBinaryOperator
    {
        public:
            static const std::string OPERATOR;

            DivisionOperator();
            ~DivisionOperator();
            
            double calculate(double left, double right);
    };
}
#endif //DIVISIONOPERATOR_H