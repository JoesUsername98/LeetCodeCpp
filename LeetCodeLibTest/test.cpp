#include "pch.h"
#include "../LeetCodeLib/leetcode.h"


TEST(pivotIndex, one)
{
	const int expected = 3;
	std::vector<int> input = { 1,7,3,6,5,6 };
	const int actual = leetcode::pivotIndex(input);
	EXPECT_EQ(expected, actual);
	EXPECT_TRUE(true);
}

TEST(pivotIndex, two)
{
	const int expected = -1;
	std::vector<int> input = { 1,2,3 };
	const int actual = leetcode::pivotIndex(input);
	EXPECT_EQ(expected, actual);
	EXPECT_TRUE(true);
}

TEST(pivotIndex, three)
{
	const int expected = 0;
	std::vector<int> input = { 2,1,-1 };
	const int actual = leetcode::pivotIndex(input);
	EXPECT_EQ(expected, actual);
	EXPECT_TRUE(true);
}