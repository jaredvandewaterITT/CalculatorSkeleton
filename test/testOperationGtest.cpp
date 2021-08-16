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

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "../inc/TestOperation.h"
#include "../inc/AbsOperator.h"
#include "../inc/AdditionOperator.h"
#include "../inc/ParenthesisOperation.h"

using namespace Calculator;

TEST(Week3IOperationTests, IOperationTestOperationTests)
{
    TestOperation testOperation;
    EXPECT_EQ(testOperation.Priority(), IOperation::PRIORITY::ZERO);
    EXPECT_EQ(testOperation.Operator(), TestOperation::OPERATOR);
    std::string testing = "Testing";
    EXPECT_EQ(testOperation.eval(testing), true);
    EXPECT_EQ(testing, "Testing 0 T");
}

TEST(Week3IOperationTests, IOperationIUnaryOperatorAbsOperatorTests)
{
    AbsOperator absOperator;
    EXPECT_EQ(absOperator.Priority(), IOperation::PRIORITY::TWO);
    EXPECT_EQ(absOperator.Operator(), AbsOperator::OPERATOR);

    std::string testing1 = "4 + 3 - 2 * abs 1.023 / 5 * 7";
    EXPECT_EQ(absOperator.eval(testing1), true);
    EXPECT_EQ(testing1, "4 + 3 - 2 * 1.023000 / 5 * 7");

    std::string testing2 = "4 + 3 - 2 * abs -1.023 / 5 * 7";
    EXPECT_EQ(absOperator.eval(testing2), true);
    EXPECT_EQ(testing2, "4 + 3 - 2 * 1.023000 / 5 * 7");
}

TEST(Week3IOperationTests, IOperationIBinaryOperatorAdditionOperatorTests)
{
    AdditionOperator additionOperator;
    EXPECT_EQ(additionOperator.Priority(), IOperation::PRIORITY::FOUR);
    EXPECT_EQ(additionOperator.Operator(), AdditionOperator::OPERATOR);

    std::string testing1 = "7 - 1 + 1 / 5";
    EXPECT_EQ(additionOperator.eval(testing1), true);
    EXPECT_EQ(testing1, "7 - 2.000000 / 5");

    std::string testing2 = "7 - 1 + -1 / 5";
    EXPECT_EQ(additionOperator.eval(testing2), true);
    EXPECT_EQ(testing2, "7 - 0.000000 / 5");
}

TEST(Week3IOperationTests, IOperationParenthesisOperationTests)
{
    ParenthesisOperation parenthesisOperation;
    EXPECT_EQ(parenthesisOperation.Priority(), IOperation::PRIORITY::ONE);
    EXPECT_EQ(parenthesisOperation.Operator(), ParenthesisOperation::OPERATOR);

    std::string testing1 = "2 + (3 / 3)";
    EXPECT_EQ(parenthesisOperation.eval(testing1), true);
    EXPECT_EQ(testing1, "2 + EVALUATED");

    std::string testing2 = "5 + (12 / (6 - 2))";
    EXPECT_EQ(parenthesisOperation.eval(testing2), true);
    EXPECT_EQ(testing2, "5 + (12 / EVALUATED)");
    EXPECT_EQ(parenthesisOperation.eval(testing2), true);
    EXPECT_EQ(testing2, "5 + EVALUATED");
}
