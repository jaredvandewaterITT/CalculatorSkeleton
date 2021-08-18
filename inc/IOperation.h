/**
 * @file IOperation.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-08-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef IOPERATION_H
#define IOPERATION_H

#include <string>
#include "CalculatorResources.h"

namespace Calculator
{
    class IOperation
    {
        public:
            virtual bool eval(std::string &input) = 0;

            IOperation(OPORDER oporder, std::string opregex);
            ~IOperation();

            const std::string& Regex();
            const OPORDER Order();
            //void setError(const std::string error);
            
        private:
            OPORDER oporder_;
            std::string opregex_;
            //std::string error_;
    };
}

#endif //IOPERATION_H