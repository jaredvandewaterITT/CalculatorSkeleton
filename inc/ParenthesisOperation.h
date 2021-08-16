/**
 * @file ParenthesisOperation.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-08-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef PARENTHESISOPERATION_H
#define PARENTHESISOPERATION_H

#include "IOperation.h"

namespace Calculator
{
    class ParenthesisOperation : public IOperation
    {
        public:
            static const std::string OPERATOR;

            ParenthesisOperation();
            ~ParenthesisOperation();

            bool eval(std::string &input);
    };
}

#endif //PARENTHESISOPERATION_H