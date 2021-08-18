/**
 * @file Evaluator.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-08-17
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef EVALUATOR_H
#define EVALUATOR_H

#include "OperatorFactory.h"

namespace Calculator
{
    class Evaluator
    {
        public:
            Evaluator();
            ~Evaluator();
            bool eval(std::string &input);
        private:
            bool iterateAndEvalPriorities(std::string &input);
            bool iterateAndEvalOperators(std::string &input, std::string rgx_operators);
            OperatorFactory operatorFactory_;
    };
}

#endif //EVALUATOR_H