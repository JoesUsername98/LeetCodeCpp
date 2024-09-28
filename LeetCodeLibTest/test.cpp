#include "pch.h"
#include "../LeetCodeLib/leetcode.h"
#include "testhelper.h"


#pragma region pivotIndex
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
#pragma endregion
#pragma region findDifference
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
#pragma endregion
#pragma region uniqueOccurrences
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
#pragma endregion
#pragma region closeStrings
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
#pragma endregion
#pragma region equalPairs
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
#pragma endregion
#pragma region removeStars
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
#pragma endregion
#pragma region asteroidCollision
TEST(asteroidCollision, one)
{
	const vector<int> expected = { 5,10 };
	vector<int> asteroids = { 5,10,-5 };
	const auto actual = leetcode::asteroidCollision(asteroids);
	EXPECT_EQ(expected, actual);
	EXPECT_TRUE(true);
}
TEST(asteroidCollision, two)
{
	const vector<int> expected = {};
	vector<int> asteroids = { 8,-8 };
	const auto actual = leetcode::asteroidCollision(asteroids);
	EXPECT_EQ(expected, actual);
	EXPECT_TRUE(true);
}
TEST(asteroidCollision, three)
{
	const vector<int> expected = { 10 };
	vector<int> asteroids = { 10,2,-5 };
	const auto actual = leetcode::asteroidCollision(asteroids);
	EXPECT_EQ(expected, actual);
	EXPECT_TRUE(true);
}
TEST(asteroidCollision, four)
{
	const vector<int> expected = { -2, -1, 1, 2 };
	vector<int> asteroids = { -2, -1, 1, 2 };
	const auto actual = leetcode::asteroidCollision(asteroids);
	EXPECT_EQ(expected, actual);
	EXPECT_TRUE(true);
}
TEST(asteroidCollision, five)
{
	const vector<int> expected = { -2 };
	vector<int> asteroids = { -2,2,-1,-2 };
	const auto actual = leetcode::asteroidCollision(asteroids);
	EXPECT_EQ(expected, actual);
	EXPECT_TRUE(true);
}
TEST(asteroidCollision, six)
{
	const vector<int> expected = { -2,-2,-2 };
	vector<int> asteroids = { 1, -2, -2, -2 };
	const auto actual = leetcode::asteroidCollision(asteroids);
	EXPECT_EQ(expected, actual);
	EXPECT_TRUE(true);
}
TEST(asteroidCollision, seven)
{
	const vector<int> expected = { -2 };
	vector<int> asteroids = { 1, -1, 1, -2 };
	const auto actual = leetcode::asteroidCollision(asteroids);
	EXPECT_EQ(expected, actual);
	EXPECT_TRUE(true);
}
TEST(asteroidCollision, eight)
{
	const vector<int> expected = { -2 };
	vector<int> asteroids = { 1, 1, -1, -2 };
	const auto actual = leetcode::asteroidCollision(asteroids);
	EXPECT_EQ(expected, actual);
	EXPECT_TRUE(true);
}
TEST(asteroidCollision, nine)
{
	const vector<int> expected = { -3,-8,-4,5,8,4};
	vector<int> asteroids = { -3,-8,-4,5,-2,8,10,-10,-7,4 };
	const auto actual = leetcode::asteroidCollision(asteroids);
	EXPECT_EQ(expected, actual);
	EXPECT_TRUE(true);
}
#pragma endregion
#pragma region decodeString
TEST(decodeString, one)
{
	const std::string expected = "aaabcbc";
	std::string s = "3[a]2[bc]";
	const auto actual = leetcode::decodeString(s);
	EXPECT_EQ(expected, actual);
	EXPECT_TRUE(true);
}
TEST(decodeString, two)
{
	const std::string expected = "accaccacc";
	std::string s = "3[a2[c]]";
	const auto actual = leetcode::decodeString(s);
	EXPECT_EQ(expected, actual);
	EXPECT_TRUE(true);
}
TEST(decodeString, three)
{
	const std::string expected = "abcabccdcdcdef";
	std::string s = "2[abc]3[cd]ef";
	const auto actual = leetcode::decodeString(s);
	EXPECT_EQ(expected, actual);
	EXPECT_TRUE(true);
}
#pragma endregion
#pragma region RecentCounter
TEST(RecentCounter, one)
{
	leetcode::RecentCounter cntr = leetcode::RecentCounter();
	EXPECT_EQ( 1 , cntr.ping(1) );
	EXPECT_EQ( 2 , cntr.ping(100) );
	EXPECT_EQ( 3 , cntr.ping(3001));
	EXPECT_EQ( 4 , cntr.ping(3001));
}
#pragma endregion
#pragma region predictPartyVictory
TEST(predictPartyVictory, one)
{
	EXPECT_EQ(leetcode::predictPartyVictory("RD"), "Radiant");
	EXPECT_EQ(leetcode::predictPartyVictory("RDD"), "Dire");
}
#pragma endregion
#pragma region deleteMiddle
TEST(deleteMiddle, one)
{
	std::vector<int> input		{ 1,3,4,7,1,2,6 };
	std::vector<int> expected	{ 1,3,4,1,2,6 };
	leetcode::ListNode* head = testhelper::vecToList<int>(input);

	leetcode::ListNode*  modifiedListHead = leetcode::deleteMiddle( head );
	leetcode::ListNode* curr = modifiedListHead;
	std::vector<int> actual;
	for (leetcode::ListNode* curr = modifiedListHead; curr ; curr = curr->next)
		actual.push_back( curr->val );
	
	EXPECT_EQ(actual, expected);
}
TEST(deleteMiddle, two)
{
	std::vector<int> input{ 1,2,3,4 };
	std::vector<int> expected{ 1,2,4 };
	leetcode::ListNode* head = testhelper::vecToList<int>(input);

	leetcode::ListNode* modifiedListHead = leetcode::deleteMiddle(head);
	leetcode::ListNode* curr = modifiedListHead;
	std::vector<int> actual;
	for (leetcode::ListNode* curr = modifiedListHead; curr; curr = curr->next)
		actual.push_back(curr->val);

	EXPECT_EQ(actual, expected);
}
TEST(deleteMiddle, three)
{
	std::vector<int> input{ 2,1 };
	std::vector<int> expected{ 2 };
	leetcode::ListNode* head = testhelper::vecToList<int>(input);

	leetcode::ListNode* modifiedListHead = leetcode::deleteMiddle(head);
	leetcode::ListNode* curr = modifiedListHead;
	std::vector<int> actual;
	for (leetcode::ListNode* curr = modifiedListHead; curr; curr = curr->next)
		actual.push_back(curr->val);

	EXPECT_EQ(actual, expected);
}
TEST(deleteMiddle, four)
{
	std::vector<int> input{ 1 };
	std::vector<int> expected{};
	leetcode::ListNode* head = testhelper::vecToList<int>(input);

	leetcode::ListNode* modifiedListHead = leetcode::deleteMiddle(head);
	leetcode::ListNode* curr = modifiedListHead;
	std::vector<int> actual;
	for (leetcode::ListNode* curr = modifiedListHead; curr; curr = curr->next)
		actual.push_back(curr->val);

	EXPECT_EQ(actual, expected);
}
#pragma endregion