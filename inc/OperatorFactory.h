/**
 * @file OperatorFactory.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-08-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef OPERATORFACTORY_H
#define OPERATORFACTORY_H

#include <map>

#include "IOperation.h"

namespace Calculator
{
    class OperatorFactory
    {
        public:
            OperatorFactory();
            ~OperatorFactory();
            IOperation* GetOperator(std::string operatorString);
            std::string GetOperatorsByPriority(IOperation::PRIORITY priority);

        private:
            //static OperatorFactory operatorFactory;
            //std::map<std::string, IOperation* (*)()> operators_;
            std::map<std::string, IOperation*> operators_;
    };
}

#endif