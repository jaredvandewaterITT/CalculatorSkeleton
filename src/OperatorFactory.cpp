/**
 * @file OperatorFactory.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-08-17
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "OperatorFactory.h"
#include "AbsOperator.h"
#include "AdditionOperator.h"
#include "SubtractionOperator.h"
#include "DivisionOperator.h"
#include "MultiplicationOperator.h"
#include "ParenthesisOperation.h"
#include "TestOperation.h"

namespace Calculator
{ 
    OperatorFactory::OperatorFactory()
    {
        operators_[AbsOperator::OPERATOR] = new AbsOperator();
        operators_[AdditionOperator::OPERATOR] = new AdditionOperator();
        operators_[SubtractionOperator::OPERATOR] = new SubtractionOperator();
        operators_[DivisionOperator::OPERATOR] = new DivisionOperator();
        operators_[MultiplicationOperator::OPERATOR] = new MultiplicationOperator();
        operators_[ParenthesisOperation::OPERATOR] = new ParenthesisOperation();
        operators_[TestOperation::OPERATOR] = new TestOperation();
    }

    OperatorFactory::~OperatorFactory() 
    {
        for (std::map<std::string, IOperation*>::iterator it = operators_.begin(); it != operators_.end(); ++it)
        {
            delete it->second;
        }
    }

    IOperation* OperatorFactory::GetOperator(std::string operatorString)
    {
        return operators_[operatorString];
    }

    std::string OperatorFactory::GetOperatorsRegExByPriority(IOperation::PRIORITY priority)
    {
        std::string retv = "";
        std::string sep = "";

        for (std::map<std::string, IOperation*>::iterator it = operators_.begin(); it != operators_.end(); ++it)
        {
            if (it->second->Priority() == priority)
            {
                retv += (sep + it->second->Escape() + it->second->Operator()); 
                sep = "|";
            }
        }

        return "(" + retv + ")";
    }
}