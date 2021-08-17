/**
 * @file IBinaryOperator.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-08-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef IBINARYOPERATION_H
#define IBINARYOPERATION_H

#include "IOperation.h"

namespace Calculator
{
    class IBinaryOperator : public IOperation
    {
        public:
            virtual double calculate(double left, double right) = 0;
            
            IBinaryOperator(IOperation::PRIORITY priority, std::string operatorString, bool escape = false);
            ~IBinaryOperator();
            
            bool eval(std::string &input);
    };
}

#endif //IBINARYOPERATION_H