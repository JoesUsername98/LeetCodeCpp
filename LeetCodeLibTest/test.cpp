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

TEST(closeStrings, one)
{
	const bool expected = true;
	std::string word1 = "abc";
	std::string word2 = "bca";
	const auto actual = leetcode::closeStrings(word1, word2);
	EXPECT_EQ(expected, actual);
	EXPECT_TRUE(true);
}
TEST(closeStrings, two)
{
	const bool expected = false;
	std::string word1 = "a";
	std::string word2 = "aa";
	const auto actual = leetcode::closeStrings(word1, word2);
	EXPECT_EQ(expected, actual);
	EXPECT_TRUE(true);
}
TEST(closeStrings, three)
{
	const bool expected = true;
	std::string word1 = "cabbba";
	std::string word2 = "abbccc";
	const auto actual = leetcode::closeStrings(word1, word2);
	EXPECT_EQ(expected, actual);
	EXPECT_TRUE(true);
}
TEST(closeStrings, four)
{
	const bool expected = false;
	std::string word1 = "uau";
	std::string word2 = "ssx";
	const auto actual = leetcode::closeStrings(word1, word2);
	EXPECT_EQ(expected, actual);
	EXPECT_TRUE(true);
}
TEST(closeStrings, five)
{
	const bool expected = false;
	std::string word1 = "aaabbbbccddeeeeefffff";
	std::string word2 = "aaaaabbcccdddeeeeffff";
	const auto actual = leetcode::closeStrings(word1, word2);
	EXPECT_EQ(expected, actual);
	EXPECT_TRUE(true);
}

TEST(equalPairs, one)
{
	const int expected = 1;
	vector<vector<int>> grid = {	{3, 2, 1} , 
									{1, 7, 6} ,
									{2, 7, 7} };
	const auto actual = leetcode::equalPairs(grid);
	EXPECT_EQ(expected, actual);
	EXPECT_TRUE(true);
}
TEST(equalPairs, two)
{
	const int expected = 3;
	vector<vector<int>> grid = {	{3, 1, 2, 2} , 
									{1, 4, 4, 5} , 
									{2, 4, 2, 2} , 
									{2, 4, 2, 2} };
	const auto actual = leetcode::equalPairs(grid);
	EXPECT_EQ(expected, actual);
	EXPECT_TRUE(true);
}
TEST(equalPairs, three)
{
	const int expected = 4;
	vector<vector<int>> grid = {{13, 13}, { 13, 13 }};
	const auto actual = leetcode::equalPairs(grid);
	EXPECT_EQ(expected, actual);
	EXPECT_TRUE(true);
}
TEST(equalPairs, four)
{
	const int expected = 48;
	vector<vector<int>> grid = { {3, 3, 3, 6, 18, 3, 3, 3, 3, 3}, {3, 3, 3, 3, 1, 3, 3, 3, 3, 3}, {3, 3, 3, 3, 1, 3, 3, 3, 3, 3}, {3, 3, 3, 3, 1, 3, 3, 3, 3, 3}, {1, 1, 1, 11, 19, 1, 1, 1, 1, 1}, {3, 3, 3, 18, 19, 3, 3, 3, 3, 3}, {3, 3, 3, 3, 1, 3, 3, 3, 3, 3}, {3, 3, 3, 3, 1, 3, 3, 3, 3, 3}, {3, 3, 3, 1, 6, 3, 3, 3, 3, 3}, {3, 3, 3, 3, 1, 3, 3, 3, 3, 3} };
	const auto actual = leetcode::equalPairs(grid);
	EXPECT_EQ(expected, actual);
	EXPECT_TRUE(true);
}

TEST(removeStars, one)
{
	const std::string expected = "lecoe";
	std::string s = "leet**cod*e"; //
	const auto actual = leetcode::removeStars(s);
	EXPECT_EQ(expected, actual);
	EXPECT_TRUE(true);
}
TEST(removeStars, two)
{
	const std::string expected = "";
	std::string s = "erase*****";
	const auto actual = leetcode::removeStars(s);
	EXPECT_EQ(expected, actual);
	EXPECT_TRUE(true);
}
TEST(removeStars, three)
{
	const std::string expected = "a";
	std::string s = "abb*cdfg*****x*";
	const auto actual = leetcode::removeStars(s);
	EXPECT_EQ(expected, actual);
	EXPECT_TRUE(true);
}