/**
 * @file TestOperation.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-08-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef TESTOPERATION_H
#define TESTOPERATION_H

#include "IOperation.h"

namespace Calculator
{
    class TestOperation : public IOperation
    {        
        public:
            static std::string OPERATOR;

            TestOperation();
            ~TestOperation();
            
            bool eval(std::string &input);
    };
}

#endif //TESTOPERATION_H