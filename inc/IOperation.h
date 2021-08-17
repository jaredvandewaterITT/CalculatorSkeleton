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

#include <vector>
#include <string>

namespace Calculator
{
    class IOperation
    {
        public:
            enum class PRIORITY { ZERO, ONE, TWO, THREE, FOUR, FIVE, SIX };
            const static std::vector<PRIORITY> PRIORITIES;

            virtual bool eval(std::string &input) = 0;

            IOperation(IOperation::PRIORITY priority, std::string operatorString, bool escape = false);
            ~IOperation();
            const std::string& Operator();
            IOperation::PRIORITY Priority();
            std::string Escape();
            //void setError(const std::string error);
            
        private:
            IOperation::PRIORITY priority_;
            std::string operator_;
            bool escape_;
            //std::string error_;
    };
}

#endif //IOPERATION_H