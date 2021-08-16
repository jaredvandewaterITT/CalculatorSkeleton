/**
 * @file IOperation.cpp
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
    IOperation::IOperation(IOperation::PRIORITY priority, std::string operatorString) :
        priority_(priority), operator_(operatorString)/*, error_(nullptr)*/ {}

    IOperation::~IOperation() {}

    IOperation::PRIORITY IOperation::Priority()
    {
        return priority_;
    }

    const std::string& IOperation::Operator()
    {
        return operator_;
    }

    // void IOperation::setError(std::string error)
    // {
    //     error_  = error;
    // }
}