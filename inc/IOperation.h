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

#include <string>

namespace Calculator
{
    class IOperation
    {
        public:
            virtual bool eval(std::string &input) = 0;

            IOperation(unsigned priority, std::string operatorString);
            ~IOperation();
            const std::string& Operator();
            unsigned Priority();
            
        private:
            unsigned priority_;
            std::string operator_;
    };
}