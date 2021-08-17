/**
 * @file testOperationGtest.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-08-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <regex>
#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "../inc/TestOperation.h"
#include "../inc/AbsOperator.h"
#include "../inc/AdditionOperator.h"
#include "../inc/SubtractionOperator.h"
#include "../inc/MultiplicationOperator.h"
#include "../inc/DivisionOperator.h"
#include "../inc/ParenthesisOperation.h"
#include "../inc/OperatorFactory.h"

using namespace Calculator;

// TEST(Week3IOperationTests, IOperationTestOperationTests)
// {
//     TestOperation testOperation;
//     EXPECT_EQ(testOperation.Priority(), IOperation::PRIORITY::ZERO);
//     EXPECT_EQ(testOperation.Operator(), TestOperation::OPERATOR);
//     std::string testing = "Testing";
//     EXPECT_EQ(testOperation.eval(testing), true);
//     EXPECT_EQ(testing, "Testing 0 T");
// }

// TEST(Week3IOperationTests, IOperationIUnaryOperatorAbsOperatorTests)
// {
//     AbsOperator absOperator;
//     EXPECT_EQ(absOperator.Priority(), IOperation::PRIORITY::TWO);
//     EXPECT_EQ(absOperator.Operator(), AbsOperator::OPERATOR);

//     std::string testing1 = "4 + 3 - 2 * abs 1.023 / 5 * 7";
//     EXPECT_EQ(absOperator.eval(testing1), true);
//     EXPECT_EQ(testing1, "4 + 3 - 2 * 1.023000 / 5 * 7");

//     std::string testing2 = "4 + 3 - 2 * abs -1.023 / 5 * 7";
//     EXPECT_EQ(absOperator.eval(testing2), true);
//     EXPECT_EQ(testing2, "4 + 3 - 2 * 1.023000 / 5 * 7");
// }

// TEST(Week3IOperationTests, IOperationIBinaryOperatorAdditionOperatorTests)
// {
//     AdditionOperator additionOperator;
//     EXPECT_EQ(additionOperator.Priority(), IOperation::PRIORITY::FOUR);
//     EXPECT_EQ(additionOperator.Operator(), AdditionOperator::OPERATOR);

//     std::string testing1 = "7 - 1 + 1 / 5";
//     EXPECT_EQ(additionOperator.eval(testing1), true);
//     EXPECT_EQ(testing1, "7 - 2.000000 / 5");

//     std::string testing2 = "7 - 1 + -1 / 5";
//     EXPECT_EQ(additionOperator.eval(testing2), true);
//     EXPECT_EQ(testing2, "7 - 0.000000 / 5");
// }

// TEST(Week3IOperationTests, IOperationParenthesisOperationTests)
// {
//     ParenthesisOperation parenthesisOperation;
//     EXPECT_EQ(parenthesisOperation.Priority(), IOperation::PRIORITY::ONE);
//     EXPECT_EQ(parenthesisOperation.Operator(), ParenthesisOperation::OPERATOR);

//     std::string testing1 = "2 + (3 / 3)";
//     EXPECT_EQ(parenthesisOperation.eval(testing1), true);
//     EXPECT_EQ(testing1, "2 + EVALUATED");

//     std::string testing2 = "5 + (12 / (6 - 2))";
//     EXPECT_EQ(parenthesisOperation.eval(testing2), true);
//     EXPECT_EQ(testing2, "5 + (12 / EVALUATED)");
//     EXPECT_EQ(parenthesisOperation.eval(testing2), true);
//     EXPECT_EQ(testing2, "5 + EVALUATED");
// }

TEST(Week3IOperationTests, AdditionTests)
{
    AdditionOperator o;

    std::string test = "1 + 2";
    EXPECT_EQ(o.eval(test), true);
    EXPECT_EQ(test, "3.000000");
}

TEST(Week3IOperationTests, SubtractionTests)
{
    SubtractionOperator o;
    
    std::string test = "1 - 2";
    EXPECT_EQ(o.eval(test), true);
    EXPECT_EQ(test, "-1.000000");
}

TEST(Week3IOperationTests, MultiplicationTests)
{
    MultiplicationOperator o;
    
    std::string test = "1.1 * -2";
    EXPECT_EQ(o.eval(test), true);
    EXPECT_EQ(test, "-2.200000");
}

TEST(Week3IOperationTests, DivisionTests)
{
    DivisionOperator o;
    
    std::string test = "3.3 / -1.1";
    EXPECT_EQ(o.eval(test), true);
    EXPECT_EQ(test, "-3.000000");
}

TEST(Week3IOperationTests, OperatorFactoryTests)
{
    OperatorFactory of;

    std::string testing = "1 + -2 - 1 * 4 / -2";
    EXPECT_EQ(of.GetOperator("+")->eval(testing), true);
    EXPECT_EQ(testing, "-1.000000 - 1 * 4 / -2");

    //testing = "1 - 2";
    EXPECT_EQ(of.GetOperator("-")->eval(testing), true);
    EXPECT_EQ(testing, "-2.000000 * 4 / -2");

    //testing = "-2 * 3";
    EXPECT_EQ(of.GetOperator("*")->eval(testing), true);
    EXPECT_EQ(testing, "-8.000000 / -2");

    //testing = "-9 / 3";
    EXPECT_EQ(of.GetOperator("/")->eval(testing), true);
    EXPECT_EQ(testing, "4.000000");
}

TEST(Week3IOperationTests, RegexTests)
{
    std::string testing = " 1 / 2 /";
    std::string rgx_string = " (/) ";
    std::regex rgx(rgx_string);
    std::smatch sm;

    regex_search(testing, sm, rgx);
    std::cout << sm.size() << "|" << sm[0] << "|" << sm[1] << std::endl;
}

TEST(Week3IOperationTests, OperatorFactoryScanTests)
{
    OperatorFactory of;

    std::string testing = "1 + -2 * 4 + 8 / 2";

    for (IOperation::PRIORITY p : IOperation::PRIORITIES)
    {
        std::string rgx_string = of.GetOperatorsByPriority(p);
        std::cout << static_cast<typename std::underlying_type<IOperation::PRIORITY>::type>(p) << "(" << rgx_string << ")" << std::endl;
        if (rgx_string != "")
        {
            std::regex rgx(rgx_string);
            std::smatch sm;

            while (regex_search(testing, sm, rgx)) 
            {
                std::cout << "   found[" << sm.size() << "|" << sm[0] << "|" << sm[1] << "] in [" << testing << "]" << std::endl;

                of.GetOperator(sm[1])->eval(testing);

                std::cout << sm[1] << ":" << testing << std::endl;
            }
        }


        //std::cout << static_cast<typename std::underlying_type<IOperation::PRIORITY>::type>(p) <<  "[" << of.GetOperatorsByPriority(p) << "]" << std::endl;
    }
}


