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

using namespace Calculator;

TEST(Week3IOperationTests, IOperationTestOperationTests)
{
    TestOperation testOperation;
    EXPECT_EQ(testOperation.Priority(), TestOperation::PRIORITY);
    EXPECT_EQ(testOperation.Operator(), TestOperation::OPERATOR);
    std::string testing = "Testing";
    EXPECT_EQ(testOperation.eval(testing), true);
    EXPECT_EQ(testing, "Testing 0 T");
}

