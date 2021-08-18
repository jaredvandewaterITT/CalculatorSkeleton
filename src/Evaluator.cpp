/**
 * @file Evaluator.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-08-17
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include <regex>
#include "Evaluator.h"

namespace Calculator
{
    Evaluator::Evaluator() {}
    
    Evaluator::~Evaluator() {}

    bool Evaluator::eval(std::string &input)
    {
        return iterateAndEvalPriorities(input);
    }

    bool Evaluator::iterateAndEvalPriorities(std::string &input)
    {
        for (IOperation::PRIORITY priority : IOperation::PRIORITIES)
        {
            std::string rgx_operators = operatorFactory_.GetOperatorsRegExByPriority(priority);
            if (!rgx_operators.empty())
            {
                iterateAndEvalOperators(input, rgx_operators);
            }
        }
        return true;
    }
    
    bool Evaluator::iterateAndEvalOperators(std::string &input, std::string rgx_operators)
    {
        std::smatch sm;
        std::regex rgx(rgx_operators);

        while (regex_search(input, sm, rgx)) 
        {
            operatorFactory_.GetOperator(sm[1])->eval(input);
        }

        return true;
    }
}