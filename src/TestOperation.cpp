/**
 * @file TestOperation.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-08-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "TestOperation.h"

namespace Calculator
{
    std::string TestOperation::OPERATOR = "T";

    TestOperation::TestOperation() :
        IOperation(IOperation::PRIORITY::ZERO, TestOperation::OPERATOR) {}

    TestOperation::~TestOperation() {}

    bool TestOperation::eval(std::string &input)
    {
        input.append(" ").append(std::to_string((unsigned)Priority())).append(" ").append(Operator());
        return true;
    }
}