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