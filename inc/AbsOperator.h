/**
 * @file AbsOperator.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-08-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef ABSOPERATOR_H
#define ABSOPERATOR_H

#include "IUnaryOperator.h"

namespace Calculator
{
    class AbsOperator : public IUnaryOperator
    {
        public:
            static const std::string OPERATOR;

            AbsOperator();
            ~AbsOperator();
            
            double calculate(double input);
    };
}
#endif //ABSOPERATOR_H