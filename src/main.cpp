////////////////////////////////////////////////////////////////////////////
/**
 *  @file   main.cpp
 *  @date   Fri April 16 2021
 *  @brief  Entry Point of Calculator
 */
////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "Calculator.h"
#include "OperatorFactory.h"

using namespace Calculator;

int main() 
{
    // Fill in or change code here as necessary.  See also Calculator.cpp
    std::cout << "Welcome to the Calculator C++ learning project." << std::endl;

    OperatorFactory of;

    for (IOperation::PRIORITY p : IOperation::PRIORITIES)
    {   
        std::cout << static_cast<typename std::underlying_type<IOperation::PRIORITY>::type>(p) <<  "[" << of.GetOperatorsByPriority(p) << "]" << std::endl;
    }
}