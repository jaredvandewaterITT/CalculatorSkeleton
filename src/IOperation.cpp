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
    const std::vector<IOperation::PRIORITY> IOperation::PRIORITIES = {
        IOperation::PRIORITY::ZERO,
        IOperation::PRIORITY::ONE,
        IOperation::PRIORITY::TWO,
        IOperation::PRIORITY::THREE,
        IOperation::PRIORITY::FOUR,
        IOperation::PRIORITY::FIVE,
        IOperation::PRIORITY::SIX
    };

    IOperation::IOperation(IOperation::PRIORITY priority, std::string operatorString, bool escape) :
        priority_(priority), operator_(operatorString), escape_(escape)/*, error_(nullptr)*/ {}

    IOperation::~IOperation() {}

    IOperation::PRIORITY IOperation::Priority()
    {
        return priority_;
    }

    const std::string& IOperation::Operator()
    {
        return operator_;
    }

    std::string IOperation::Escape()
    {
        std::string retv = escape_ ? "\\" : "";
        return retv;
    }

    // void IOperation::setError(std::string error)
    // {
    //     error_  = error;
    // }
}