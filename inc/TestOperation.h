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

#include "IOperation.h"

namespace Calculator
{
    class TestOperation : public IOperation
    {        
        public:
            static unsigned PRIORITY;
            static std::string OPERATOR;

            TestOperation();
            ~TestOperation();
            bool eval(std::string &input);
    };
}