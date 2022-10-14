//
// Created by Daniel on 13/10/2022.
//
#include "gtest/gtest.h"
#include "NextPermute.h"

TEST(NextPermutationSuite, NextPermutationIsRightWithFisrtExampleVector){

    NextPermute nums = {1,2,3};
    NextPermute res = {1,3,2};
    nums.permute();

    EXPECT_EQ(nums, res);
}

TEST(NextPermutationSuite, NextPermutationIsRightWithSecondExampleVector){

    NextPermute nums = {3,2,1};
    NextPermute res = {1,2,3};
    nums.permute();

    EXPECT_EQ(nums, res);
}

TEST(NextPermutationSuite, NextPermutationIsRightWithThirdExampleVector){

    NextPermute nums = {1,1,5};
    NextPermute res = {1,5,1};
    nums.permute();

    EXPECT_EQ(nums, res);
}