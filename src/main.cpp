////////////////////////////////////////////////////////////////////////////
/**
 *  @file   main.cpp
 *  @date   Fri April 16 2021
 *  @brief  Entry Point of Calculator
 */
////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "Calculator.h"
#include "AdditionOperator.h"

using namespace Calculator;

int main() 
{
    // Fill in or change code here as necessary.  See also Calculator.cpp
    std::cout << "Welcome to the Calculator C++ learning project." << std::endl;
    AdditionOperator additionOperator;
    std::string testing1 = "7 - 1 + 1 / 5";
    if (additionOperator.eval(testing1))
    {
        std::cout << "pass:" << testing1 << std::endl;
    }
    else 
    {
        std::cout << "fail:" << testing1 << std::endl;
    };
}