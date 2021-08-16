/**
 * @file ParenthesisOperation.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-08-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include <regex>

#include "ParenthesisOperation.h"

namespace Calculator
{
    const std::string ParenthesisOperation::OPERATOR = "\\(";

    ParenthesisOperation::ParenthesisOperation() :
        IOperation(IOperation::PRIORITY::ONE, ParenthesisOperation::OPERATOR) {}

    ParenthesisOperation::~ParenthesisOperation() {}

    bool ParenthesisOperation::eval(std::string &input)
    {
        bool retv = false;

        std::string rgx_string = Operator() + "([^\\(\\)]+)\\)";
        std::regex rgx(rgx_string);
        std::smatch sm;

        if (regex_search(input, sm, rgx)) 
        {
            double arg = std::stod(sm[1]);
            std::string result = "EVALUATED"; //calculate(arg);
            input = regex_replace(input, rgx, result);
            retv = true;
        }

        return retv;
    }
}