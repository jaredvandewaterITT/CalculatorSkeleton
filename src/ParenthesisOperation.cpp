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
#include "Evaluator.h"

namespace Calculator
{
    const std::string ParenthesisOperation::OPERATOR = "(";

    ParenthesisOperation::ParenthesisOperation() :
        IOperation(IOperation::PRIORITY::ONE, ParenthesisOperation::OPERATOR, true) {}

    ParenthesisOperation::~ParenthesisOperation() {}

    bool ParenthesisOperation::eval(std::string &input)
    {
        bool retv = false;

        std::string rgx_string = Escape() + Operator() + "([^\\(\\)]+)\\)";
        std::regex rgx(rgx_string);
        std::smatch sm;

        if (regex_search(input, sm, rgx)) 
        {
            Evaluator evaluator;
            std::string expression = sm[1];
            retv = evaluator.eval(expression);
            input = regex_replace(input, rgx, expression, std::regex_constants::format_first_only);
        }

        return retv;
    }
}