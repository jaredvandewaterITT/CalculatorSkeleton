/**
 * @file IUnaryOperator.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-08-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef IUNARYOPERATION_H
#define IUNARYOPERATION_H

#include "IOperation.h"

namespace Calculator
{
    class IUnaryOperator : public IOperation
    {
        public:
            virtual double calculate(double) = 0;
            
            IUnaryOperator(std::string operatorString, bool escape = false);
            ~IUnaryOperator();
            
            bool eval(std::string &input);
    };
}

#endif //IUNARYOPERATION_H