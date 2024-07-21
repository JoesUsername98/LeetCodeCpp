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

TEST(findDifference, one)
{
	const vector<vector<int>> expected = { {1, 3} ,{4, 6} };
	std::vector<int> nums1 = {1, 2, 3};
	std::vector<int> nums2 = {2, 4, 6};
	const vector<vector<int>> actual = leetcode::findDifference(nums1, nums2);
	EXPECT_EQ(expected, actual);
	EXPECT_TRUE(true);
}
TEST(findDifference, two)
{
	const vector<vector<int>> expected = { {3} ,{} };
	std::vector<int> nums1 = { 1, 2, 3, 3 };
	std::vector<int> nums2 = { 1, 1, 2, 2 };
	const vector<vector<int>> actual = leetcode::findDifference(nums1, nums2);
	EXPECT_EQ(expected, actual);
	EXPECT_TRUE(true);
}

TEST(uniqueOccurrences, one)
{
	const bool expected = true;
	std::vector<int> arr = { 1, 2, 2, 1, 1, 3};
	const auto actual = leetcode::uniqueOccurrences(arr);
	EXPECT_EQ(expected, actual);
	EXPECT_TRUE(true);
}
TEST(uniqueOccurrences, two)
{
	const bool expected = false;
	std::vector<int> arr = { 1, 2 };
	const auto actual = leetcode::uniqueOccurrences(arr);
	EXPECT_EQ(expected, actual);
	EXPECT_TRUE(true);
}
TEST(uniqueOccurrences, three)
{
	const bool expected = true;
	std::vector<int> arr = { -3, 0, 1, -3, 1, 1, 1, -3, 10, 0 };
	const auto actual = leetcode::uniqueOccurrences(arr);
	EXPECT_EQ(expected, actual);
	EXPECT_TRUE(true);
}
