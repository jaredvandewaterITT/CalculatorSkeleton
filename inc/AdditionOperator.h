/**
 * @file AdditionOperator.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-08-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef ADDITIONOPERATOR_H
#define ADDITIONOPERATOR_H

#include "IBinaryOperator.h"

namespace Calculator
{
    class AdditionOperator : public IBinaryOperator
    {
        public:
            static const std::string OPERATOR;

            AdditionOperator();
            ~AdditionOperator();
            
            double calculate(double left, double right);
    };
}
#endif //ADDITIONOPERATOR_H