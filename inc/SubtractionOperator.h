/**
 * @file SubtractionOperator.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-08-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef SUBTRACTIONOPERATOR_H
#define SUBTRACTIONOPERATOR_H

#include "IBinaryOperator.h"

namespace Calculator
{
    class SubtractionOperator : public IBinaryOperator
    {
        public:
            static const std::string OPERATOR;

            SubtractionOperator();
            ~SubtractionOperator();
            
            double calculate(double left, double right);
    };
}
#endif //SUBTRACTIONOPERATOR_H