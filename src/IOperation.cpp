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

#include "CalculatorResources.h"
#include "IOperation.h"

namespace Calculator
{
    IOperation(OPORDER oporder, std::string opregex) :
       oporder_(oporder), opregex_(opregex)/*, error_(nullptr)*/ {}

    ~IOperation() {}

    const OPORDER Order()
    {
        return oporder_;
    }

    const std::string Regex()
    {
        return opregex_;
    }

    // void setError(std::string error)
    // {
    //     error_  = error;
    // }
}