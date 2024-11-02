#include "pch.h"
#include "../LeetCodeLib/leetcode.h"
#include "testhelper.h"


//#pragma region pivotIndex
//TEST(pivotIndex, one)
//{
//	const int expected = 3;
//	std::vector<int> input = { 1,7,3,6,5,6 };
//	const int actual = leetcode::pivotIndex(input);
//	EXPECT_EQ(expected, actual);
//	EXPECT_TRUE(true);
//}
//TEST(pivotIndex, two)
//{
//	const int expected = -1;
//	std::vector<int> input = { 1,2,3 };
//	const int actual = leetcode::pivotIndex(input);
//	EXPECT_EQ(expected, actual);
//	EXPECT_TRUE(true);
//}
//TEST(pivotIndex, three)
//{
//	const int expected = 0;
//	std::vector<int> input = { 2,1,-1 };
//	const int actual = leetcode::pivotIndex(input);
//	EXPECT_EQ(expected, actual);
//	EXPECT_TRUE(true);
//}
//#pragma endregion
//#pragma region findDifference
//TEST(findDifference, one)
//{
//	const vector<vector<int>> expected = { {1, 3} ,{4, 6} };
//	std::vector<int> nums1 = {1, 2, 3};
//	std::vector<int> nums2 = {2, 4, 6};
//	const vector<vector<int>> actual = leetcode::findDifference(nums1, nums2);
//	EXPECT_EQ(expected, actual);
//	EXPECT_TRUE(true);
//}
//TEST(findDifference, two)
//{
//	const vector<vector<int>> expected = { {3} ,{} };
//	std::vector<int> nums1 = { 1, 2, 3, 3 };
//	std::vector<int> nums2 = { 1, 1, 2, 2 };
//	const vector<vector<int>> actual = leetcode::findDifference(nums1, nums2);
//	EXPECT_EQ(expected, actual);
//	EXPECT_TRUE(true);
//}
//#pragma endregion
//#pragma region uniqueOccurrences
//TEST(uniqueOccurrences, one)
//{
//	const bool expected = true;
//	std::vector<int> arr = { 1, 2, 2, 1, 1, 3};
//	const auto actual = leetcode::uniqueOccurrences(arr);
//	EXPECT_EQ(expected, actual);
//	EXPECT_TRUE(true);
//}
//TEST(uniqueOccurrences, two)
//{
//	const bool expected = false;
//	std::vector<int> arr = { 1, 2 };
//	const auto actual = leetcode::uniqueOccurrences(arr);
//	EXPECT_EQ(expected, actual);
//	EXPECT_TRUE(true);
//}
//TEST(uniqueOccurrences, three)
//{
//	const bool expected = true;
//	std::vector<int> arr = { -3, 0, 1, -3, 1, 1, 1, -3, 10, 0 };
//	const auto actual = leetcode::uniqueOccurrences(arr);
//	EXPECT_EQ(expected, actual);
//	EXPECT_TRUE(true);
//}
//#pragma endregion
//#pragma region closeStrings
//TEST(closeStrings, one)
//{
//	const bool expected = true;
//	std::string word1 = "abc";
//	std::string word2 = "bca";
//	const auto actual = leetcode::closeStrings(word1, word2);
//	EXPECT_EQ(expected, actual);
//	EXPECT_TRUE(true);
//}
//TEST(closeStrings, two)
//{
//	const bool expected = false;
//	std::string word1 = "a";
//	std::string word2 = "aa";
//	const auto actual = leetcode::closeStrings(word1, word2);
//	EXPECT_EQ(expected, actual);
//	EXPECT_TRUE(true);
//}
//TEST(closeStrings, three)
//{
//	const bool expected = true;
//	std::string word1 = "cabbba";
//	std::string word2 = "abbccc";
//	const auto actual = leetcode::closeStrings(word1, word2);
//	EXPECT_EQ(expected, actual);
//	EXPECT_TRUE(true);
//}
//TEST(closeStrings, four)
//{
//	const bool expected = false;
//	std::string word1 = "uau";
//	std::string word2 = "ssx";
//	const auto actual = leetcode::closeStrings(word1, word2);
//	EXPECT_EQ(expected, actual);
//	EXPECT_TRUE(true);
//}
//TEST(closeStrings, five)
//{
//	const bool expected = false;
//	std::string word1 = "aaabbbbccddeeeeefffff";
//	std::string word2 = "aaaaabbcccdddeeeeffff";
//	const auto actual = leetcode::closeStrings(word1, word2);
//	EXPECT_EQ(expected, actual);
//	EXPECT_TRUE(true);
//}
//#pragma endregion
//#pragma region equalPairs
//TEST(equalPairs, one)
//{
//	const int expected = 1;
//	vector<vector<int>> grid = {	{3, 2, 1} , 
//									{1, 7, 6} ,
//									{2, 7, 7} };
//	const auto actual = leetcode::equalPairs(grid);
//	EXPECT_EQ(expected, actual);
//	EXPECT_TRUE(true);
//}
//TEST(equalPairs, two)
//{
//	const int expected = 3;
//	vector<vector<int>> grid = {	{3, 1, 2, 2} , 
//									{1, 4, 4, 5} , 
//									{2, 4, 2, 2} , 
//									{2, 4, 2, 2} };
//	const auto actual = leetcode::equalPairs(grid);
//	EXPECT_EQ(expected, actual);
//	EXPECT_TRUE(true);
//}
//TEST(equalPairs, three)
//{
//	const int expected = 4;
//	vector<vector<int>> grid = {{13, 13}, { 13, 13 }};
//	const auto actual = leetcode::equalPairs(grid);
//	EXPECT_EQ(expected, actual);
//	EXPECT_TRUE(true);
//}
//TEST(equalPairs, four)
//{
//	const int expected = 48;
//	vector<vector<int>> grid = { {3, 3, 3, 6, 18, 3, 3, 3, 3, 3}, {3, 3, 3, 3, 1, 3, 3, 3, 3, 3}, {3, 3, 3, 3, 1, 3, 3, 3, 3, 3}, {3, 3, 3, 3, 1, 3, 3, 3, 3, 3}, {1, 1, 1, 11, 19, 1, 1, 1, 1, 1}, {3, 3, 3, 18, 19, 3, 3, 3, 3, 3}, {3, 3, 3, 3, 1, 3, 3, 3, 3, 3}, {3, 3, 3, 3, 1, 3, 3, 3, 3, 3}, {3, 3, 3, 1, 6, 3, 3, 3, 3, 3}, {3, 3, 3, 3, 1, 3, 3, 3, 3, 3} };
//	const auto actual = leetcode::equalPairs(grid);
//	EXPECT_EQ(expected, actual);
//	EXPECT_TRUE(true);
//}
//#pragma endregion
//#pragma region removeStars
//TEST(removeStars, one)
//{
//	const std::string expected = "lecoe";
//	std::string s = "leet**cod*e"; //
//	const auto actual = leetcode::removeStars(s);
//	EXPECT_EQ(expected, actual);
//	EXPECT_TRUE(true);
//}
//TEST(removeStars, two)
//{
//	const std::string expected = "";
//	std::string s = "erase*****";
//	const auto actual = leetcode::removeStars(s);
//	EXPECT_EQ(expected, actual);
//	EXPECT_TRUE(true);
//}
//TEST(removeStars, three)
//{
//	const std::string expected = "a";
//	std::string s = "abb*cdfg*****x*";
//	const auto actual = leetcode::removeStars(s);
//	EXPECT_EQ(expected, actual);
//	EXPECT_TRUE(true);
//}
//#pragma endregion
//#pragma region asteroidCollision
//TEST(asteroidCollision, one)
//{
//	const vector<int> expected = { 5,10 };
//	vector<int> asteroids = { 5,10,-5 };
//	const auto actual = leetcode::asteroidCollision(asteroids);
//	EXPECT_EQ(expected, actual);
//	EXPECT_TRUE(true);
//}
//TEST(asteroidCollision, two)
//{
//	const vector<int> expected = {};
//	vector<int> asteroids = { 8,-8 };
//	const auto actual = leetcode::asteroidCollision(asteroids);
//	EXPECT_EQ(expected, actual);
//	EXPECT_TRUE(true);
//}
//TEST(asteroidCollision, three)
//{
//	const vector<int> expected = { 10 };
//	vector<int> asteroids = { 10,2,-5 };
//	const auto actual = leetcode::asteroidCollision(asteroids);
//	EXPECT_EQ(expected, actual);
//	EXPECT_TRUE(true);
//}
//TEST(asteroidCollision, four)
//{
//	const vector<int> expected = { -2, -1, 1, 2 };
//	vector<int> asteroids = { -2, -1, 1, 2 };
//	const auto actual = leetcode::asteroidCollision(asteroids);
//	EXPECT_EQ(expected, actual);
//	EXPECT_TRUE(true);
//}
//TEST(asteroidCollision, five)
//{
//	const vector<int> expected = { -2 };
//	vector<int> asteroids = { -2,2,-1,-2 };
//	const auto actual = leetcode::asteroidCollision(asteroids);
//	EXPECT_EQ(expected, actual);
//	EXPECT_TRUE(true);
//}
//TEST(asteroidCollision, six)
//{
//	const vector<int> expected = { -2,-2,-2 };
//	vector<int> asteroids = { 1, -2, -2, -2 };
//	const auto actual = leetcode::asteroidCollision(asteroids);
//	EXPECT_EQ(expected, actual);
//	EXPECT_TRUE(true);
//}
//TEST(asteroidCollision, seven)
//{
//	const vector<int> expected = { -2 };
//	vector<int> asteroids = { 1, -1, 1, -2 };
//	const auto actual = leetcode::asteroidCollision(asteroids);
//	EXPECT_EQ(expected, actual);
//	EXPECT_TRUE(true);
//}
//TEST(asteroidCollision, eight)
//{
//	const vector<int> expected = { -2 };
//	vector<int> asteroids = { 1, 1, -1, -2 };
//	const auto actual = leetcode::asteroidCollision(asteroids);
//	EXPECT_EQ(expected, actual);
//	EXPECT_TRUE(true);
//}
//TEST(asteroidCollision, nine)
//{
//	const vector<int> expected = { -3,-8,-4,5,8,4};
//	vector<int> asteroids = { -3,-8,-4,5,-2,8,10,-10,-7,4 };
//	const auto actual = leetcode::asteroidCollision(asteroids);
//	EXPECT_EQ(expected, actual);
//	EXPECT_TRUE(true);
//}
//#pragma endregion
//#pragma region decodeString
//TEST(decodeString, one)
//{
//	const std::string expected = "aaabcbc";
//	std::string s = "3[a]2[bc]";
//	const auto actual = leetcode::decodeString(s);
//	EXPECT_EQ(expected, actual);
//	EXPECT_TRUE(true);
//}
//TEST(decodeString, two)
//{
//	const std::string expected = "accaccacc";
//	std::string s = "3[a2[c]]";
//	const auto actual = leetcode::decodeString(s);
//	EXPECT_EQ(expected, actual);
//	EXPECT_TRUE(true);
//}
//TEST(decodeString, three)
//{
//	const std::string expected = "abcabccdcdcdef";
//	std::string s = "2[abc]3[cd]ef";
//	const auto actual = leetcode::decodeString(s);
//	EXPECT_EQ(expected, actual);
//	EXPECT_TRUE(true);
//}
//#pragma endregion
//#pragma region RecentCounter
//TEST(RecentCounter, one)
//{
//	leetcode::RecentCounter cntr = leetcode::RecentCounter();
//	EXPECT_EQ( 1 , cntr.ping(1) );
//	EXPECT_EQ( 2 , cntr.ping(100) );
//	EXPECT_EQ( 3 , cntr.ping(3001));
//	EXPECT_EQ( 4 , cntr.ping(3001));
//}
//#pragma endregion
//#pragma region predictPartyVictory
//TEST(predictPartyVictory, one)
//{
//	EXPECT_EQ(leetcode::predictPartyVictory("RD"), "Radiant");
//	EXPECT_EQ(leetcode::predictPartyVictory("RDD"), "Dire");
//}
//#pragma endregion
//#pragma region deleteMiddle
//TEST(deleteMiddle, one)
//{
//	std::vector<int> input		{ 1,3,4,7,1,2,6 };
//	std::vector<int> expected	{ 1,3,4,1,2,6 };
//	leetcode::ListNode* head = testhelper::vecToList<int>(input);
//
//	leetcode::ListNode*  modifiedListHead = leetcode::deleteMiddle( head );
//	std::vector<int> actual = testhelper::listToVec<int>( modifiedListHead );
//
//	EXPECT_EQ(actual, expected);
//}
//TEST(deleteMiddle, two)
//{
//	std::vector<int> input{ 1,2,3,4 };
//	std::vector<int> expected{ 1,2,4 };
//	leetcode::ListNode* head = testhelper::vecToList<int>(input);
//
//	leetcode::ListNode* modifiedListHead = leetcode::deleteMiddle(head);
//	std::vector<int> actual = testhelper::listToVec<int>(modifiedListHead);
//
//	EXPECT_EQ(actual, expected);
//}
//TEST(deleteMiddle, three)
//{
//	std::vector<int> input{ 2,1 };
//	std::vector<int> expected{ 2 };
//	leetcode::ListNode* head = testhelper::vecToList<int>(input);
//
//	leetcode::ListNode* modifiedListHead = leetcode::deleteMiddle(head);
//	std::vector<int> actual = testhelper::listToVec<int>(modifiedListHead);
//
//	EXPECT_EQ(actual, expected);
//}
//TEST(deleteMiddle, four)
//{
//	std::vector<int> input{ 1 };
//	std::vector<int> expected{};
//	leetcode::ListNode* head = testhelper::vecToList<int>(input);
//
//	leetcode::ListNode* modifiedListHead = leetcode::deleteMiddle(head);
//	std::vector<int> actual = testhelper::listToVec<int>(modifiedListHead);
//
//	EXPECT_EQ(actual, expected);
//}
//#pragma endregion
//#pragma region oddEvenList
//TEST(oddEvenList, one)
//{
//	std::vector<int> input{ 1,2,3,4,5 };
//	std::vector<int> expected{ 1,3,5,2,4 };
//	leetcode::ListNode* head = testhelper::vecToList<int>(input);
//
//	leetcode::ListNode* modifiedListHead = leetcode::oddEvenList(head);
//	std::vector<int> actual = testhelper::listToVec<int>(modifiedListHead);
//
//
//	EXPECT_EQ(actual, expected);
//}
//TEST(oddEvenList, two)
//{
//	std::vector<int> input{ 2,1,3,5,6,4,7 };
//	std::vector<int> expected{ 2,3,6,7,1,5,4 };
//	
//	leetcode::ListNode* head = testhelper::vecToList<int>(input);
//
//	leetcode::ListNode* modifiedListHead = leetcode::oddEvenList(head);
//	std::vector<int> actual = testhelper::listToVec<int>(modifiedListHead);
//
//	EXPECT_EQ(actual, expected);
//}
//#pragma endregion
//#pragma region reverseList
//TEST(reverseList, one)
//{
//	std::vector<int> input{ 1,2,3,4,5 };
//	std::vector<int> expected{ 5,4,3,2,1 };
//	leetcode::ListNode* head = testhelper::vecToList<int>(input);
//
//	leetcode::ListNode* modifiedListHead = leetcode::reverseList(head);
//	std::vector<int> actual = testhelper::listToVec<int>(modifiedListHead);
//
//
//	EXPECT_EQ(actual, expected);
//}
//TEST(reverseList, two)
//{
//	std::vector<int> input{ 1,2 };
//	std::vector<int> expected{ 2,1 };
//
//	leetcode::ListNode* head = testhelper::vecToList<int>(input);
//
//	leetcode::ListNode* modifiedListHead = leetcode::reverseList(head);
//	std::vector<int> actual = testhelper::listToVec<int>(modifiedListHead);
//
//	EXPECT_EQ(actual, expected);
//}
//TEST(reverseList, tree)
//{
//	std::vector<int> input{  };
//	std::vector<int> expected{  };
//
//	leetcode::ListNode* head = testhelper::vecToList<int>(input);
//
//	leetcode::ListNode* modifiedListHead = leetcode::reverseList(head);
//	std::vector<int> actual = testhelper::listToVec<int>(modifiedListHead);
//
//	EXPECT_EQ(actual, expected);
//}
//#pragma endregion
//#pragma region pairSum
//TEST(pairSum, one)
//{
//	std::vector<int> input{ 5,4,2,1 };
//	int expected = 6;
//
//	leetcode::ListNode* head = testhelper::vecToList<int>(input);
//
//	int actual = leetcode::pairSum(head);
//
//	EXPECT_EQ(actual, expected);
//}
//TEST(pairSum, two)
//{
//	std::vector<int> input{ 4,2,2,3 };
//	int expected = 7;
//
//	leetcode::ListNode* head = testhelper::vecToList<int>(input);
//
//	int actual = leetcode::pairSum(head);
//
//	EXPECT_EQ(actual, expected);
//}
//TEST(pairSum, tree)
//{
//	std::vector<int> input{ 1,100000 };
//	int expected = 100001;
//
//	leetcode::ListNode* head = testhelper::vecToList<int>(input);
//
//	int actual = leetcode::pairSum(head);
//
//	EXPECT_EQ(actual, expected);
//}
//#pragma endregion
//#pragma region maxDepth
//TEST(maxDepth, one)
//{
//	std::vector<std::optional<int>> input{ 3,9,20,std::optional<int>(),std::optional<int>(),15,7};
//	int expected = 3;
//
//	TreeNode* root = testhelper::vecToTree<int>(input);
//
//	int actual = leetcode::maxDepth(root);
//
//	EXPECT_EQ(actual, expected);
//}
//#pragma endregion
//#pragma region leafSimilar
//TEST(leafSimilar, one)
//{
//	std::vector<std::optional<int>> input1{ 3,5,1,6,2,9,8,nullopt,nullopt,7,4 };
//	std::vector<std::optional<int>> input2{ 3,5,1,6,7,4,2,nullopt,nullopt,nullopt,nullopt,nullopt,nullopt,9,8 };
//	bool expected = true;
//
//	TreeNode* root1 = testhelper::vecToTree<int>(input1);
//	TreeNode* root2 = testhelper::vecToTree<int>(input2);
//
//	bool actual = leetcode::leafSimilar(root1, root2);
//
//	EXPECT_EQ(actual, expected);
//}
//#pragma endregion
//#pragma region goodNodes
//TEST(goodNodes, one)
//{
//	std::vector<std::optional<int>> input{ 3,1,4,3,nullopt,1,5 };
//	int expected = 4;
//
//	TreeNode* root = testhelper::vecToTree<int>( input );
//
//	int actual = leetcode::goodNodes( root );
//
//	EXPECT_EQ(actual, expected);
//}
//TEST(goodNodes, two)
//{
//	std::vector<std::optional<int>> input{ 3,3,nullopt,4,2 };
//	int expected = 3;
//
//	TreeNode* root = testhelper::vecToTree<int>(input);
//
//	int actual = leetcode::goodNodes(root);
//
//	EXPECT_EQ(actual, expected);
//}
//TEST(goodNodes, three)
//{
//	std::vector<std::optional<int>> input{ 9, nullopt, 3, 6 };
//	int expected = 1;
//
//	TreeNode* root = testhelper::vecToTree<int>(input);
//
//	int actual = leetcode::goodNodes(root);
//
//	EXPECT_EQ(actual, expected);
//}
//#pragma endregion
#pragma region pathSum3
//TEST(pathSum3, one)
//{
//	std::vector<std::optional<int>> input{ 10,5,-3,3,2,nullopt,11,3,-2,nullopt,1  };
//	int target = 8;
//	int expected = 3;
//
//	TreeNode* root = testhelper::vecToTree<int>(input);
//
//	int actual = leetcode::pathSum3(root, target);
//
//	EXPECT_EQ(actual, expected);
//}
//TEST(pathSum3, two)
//{
//	std::vector<std::optional<int>> input{ 5,4,8,11,nullopt,13,4,7,2,nullopt,nullopt,5,1 };
//	int target = 22;
//	int expected = 3;
//
//	TreeNode* root = testhelper::vecToTree<int>(input);
//
//	int actual = leetcode::pathSum3(root, target);
//
//	EXPECT_EQ(actual, expected);
//}
//TEST(pathSum3, three)
//{
//	std::vector<std::optional<int>> input{ 1,nullopt,2,nullopt,3,nullopt,4,nullopt,5 };
//	int target = 3;
//	int expected = 2;
//
//	TreeNode* root = testhelper::vecToTree<int>(input);
//
//	int actual = leetcode::pathSum3(root, target);
//
//	EXPECT_EQ(actual, expected);
//}
//#pragma endregion
//#pragma region longestZigZag
//TEST(longestZigZag, one)
//{
//	std::vector<std::optional<int>> input{ 1,nullopt,1,1,1,nullopt,nullopt,1,1,nullopt,1,nullopt,nullopt,nullopt,1 };
//	int expected = 3;
//
//	TreeNode* root = testhelper::vecToTree<int>(input);
//
//	int actual = leetcode::longestZigZag(root);
//
//	EXPECT_EQ(actual, expected);
//}
//TEST(longestZigZag, two)
//{
//	std::vector<std::optional<int>> input{ 1,1,1,nullopt,1,nullopt,nullopt,1,1,nullopt,1 };
//	int expected = 4;
//
//	TreeNode* root = testhelper::vecToTree<int>(input);
//
//	int actual = leetcode::longestZigZag(root);
//
//	EXPECT_EQ(actual, expected);
//}
//#pragma endregion
//#pragma region lowestCommonAncestor
//TEST(lowestCommonAncestor, one )
//{
//	std::vector<std::optional<int>> input{ 3,5,1,6,2,0,8,nullopt,nullopt,7,4 };
//	int pVal = 5;
//	int qVal = 1;
//	int lcaVal = 3;
//
//	TreeNode* root = testhelper::vecToTree<int>(input);
//	TreeNode* q = testhelper::getNodeWithVal(root, qVal);
//	TreeNode* p = testhelper::getNodeWithVal(root, pVal);
//	TreeNode* expected = testhelper::getNodeWithVal(root, lcaVal);
//
//	TreeNode* actual = leetcode::lowestCommonAncestor(root, p, q);
//
//	EXPECT_EQ(actual->val, expected->val);
//}
//TEST(lowestCommonAncestor, two)
//{
//	std::vector<std::optional<int>> input{ 3,5,1,6,2,0,8,nullopt,nullopt,7,4 };
//	int pVal = 5;
//	int qVal = 4;
//	int lcaVal = 5;
//
//	TreeNode* root = testhelper::vecToTree<int>(input);
//	TreeNode* q = testhelper::getNodeWithVal(root, qVal);
//	TreeNode* p = testhelper::getNodeWithVal(root, pVal);
//	TreeNode* expected = testhelper::getNodeWithVal(root, lcaVal);
//
//	TreeNode* actual = leetcode::lowestCommonAncestor(root, p, q);
//
//	EXPECT_EQ(actual->val, expected->val);
//}
//#pragma endregion
//#pragma region rightSideView
//TEST(rightSideView, one)
//{
//	std::vector<std::optional<int>> input{ 1,2,3,nullopt,5,nullopt,4 };
//	std::vector<int> expected = { 1,3,4 };
//
//	TreeNode* root = testhelper::vecToTree<int>(input);
//
//	std::vector<int> actual = leetcode::rightSideView(root);
//
//	EXPECT_EQ(actual, expected);
//}
//TEST(rightSideView, two)
//{
//	std::vector<std::optional<int>> input{ 1,nullopt,3 };
//	std::vector<int> expected = { 1,3 };
//
//	TreeNode* root = testhelper::vecToTree<int>(input);
//
//	std::vector<int> actual = leetcode::rightSideView(root);
//
//	EXPECT_EQ(actual, expected);
//}
//TEST(rightSideView, three)
//{
//	std::vector<std::optional<int>> input{  };
//	std::vector<int> expected = {  };
//
//	TreeNode* root = testhelper::vecToTree<int>(input);
//
//	std::vector<int> actual = leetcode::rightSideView(root);
//
//	EXPECT_EQ(actual, expected);
//}
//TEST(rightSideView, four)
//{
//	std::vector<std::optional<int>> input{ 1,2,3,4 };
//	std::vector<int> expected = { 1,3,4 };
//
//	TreeNode* root = testhelper::vecToTree<int>(input);
//
//	std::vector<int> actual = leetcode::rightSideView(root);
//
//	EXPECT_EQ(actual, expected);
//}
//#pragma endregion
//#pragma region rightSideView
//TEST(maxLevelSum, one)
//{
//	std::vector<std::optional<int>> input{ 1,7,0,7,-8,nullopt,nullopt };
//	int expected = 2;
//
//	TreeNode* root = testhelper::vecToTree<int>(input);
//
//	int actual = leetcode::maxLevelSum(root);
//
//	EXPECT_EQ(actual, expected);
//}
//TEST(rightSideView, two)
//{
//	std::vector<std::optional<int>> input{ 989,nullopt,10250,98693,-89388,nullopt,nullopt,nullopt,-32127 };
//	int expected = 2;
//
//	TreeNode* root = testhelper::vecToTree<int>(input);
//
//	int actual = leetcode::maxLevelSum(root);
//
//	EXPECT_EQ(actual, expected);
//}
//#pragma endregion
//#pragma region searchBST
//TEST(searchBST, one)
//{
//	int val = 2;
//	TreeNode* root = testhelper::vecToTree<int>({4, 2, 7, 1, 3});
//	TreeNode* expected = testhelper::vecToTree<int>({ 2,1,3 });
//
//	TreeNode* actual = leetcode::searchBST(root, val);
//
//	if (!expected)
//		EXPECT_EQ(!expected, !actual);
//	else
//		EXPECT_EQ(actual->val, expected->val);
//}
//TEST(searchBST, two)
//{
//	int val = 5;
//	TreeNode* root = testhelper::vecToTree<int>({ 4, 2, 7, 1, 3 });
//	TreeNode* expected = nullptr;
//
//	TreeNode* actual = leetcode::searchBST(root, val);
//
//	if( !expected )
//		EXPECT_EQ(!expected, !actual);
//	else
//		EXPECT_EQ(actual->val, expected->val);
//}
//#pragma endregion
//#pragma region treeToVect
//TEST(vecToTree, one)
//{
//	vector<optional<int>> in = { 5,3,6,2,4,nullopt,7 };
//	TreeNode* root = testhelper::vecToTree<int>(in);
//	vector<optional<int>> out = testhelper::treeToVect(root);
//
//	EXPECT_EQ(in, out);
//}
//#pragma endregion
//#pragma region deleteNode
//TEST(deleteNode, one)
//{
//	int val = 3;
//	TreeNode* root = testhelper::vecToTree<int>({ 5,3,6,2,4,nullopt,7 });
//	TreeNode* expected = testhelper::vecToTree<int>({ 5,4,6,2,nullopt,nullopt,7 });
//
//	TreeNode* actual = leetcode::deleteNode(root, val);
//
//	EXPECT_EQ(testhelper::treeToVect(actual), testhelper::treeToVect(expected));
//}
//TEST(deleteNode, two)
//{
//	int val = 0;
//	TreeNode* root = testhelper::vecToTree<int>({ 5,3,6,2,4,nullopt,7 });
//	TreeNode* expected = testhelper::vecToTree<int>({ 5,3,6,2,4,nullopt,7 });
//
//	TreeNode* actual = leetcode::deleteNode(root, val);
//
//	EXPECT_EQ(testhelper::treeToVect(actual), testhelper::treeToVect(expected));
//}
//#pragma endregion
//#pragma region canVisitAllRooms
//TEST(canVisitAllRooms, one)
//{
//	vector<vector<int>> input = { {1} ,{2},{3},{} };
//	EXPECT_EQ(leetcode::canVisitAllRooms(input), true);
//}
//TEST(canVisitAllRooms, two)
//{
//	vector<vector<int>> input = { {1, 3}, { 3, 0, 1 }, { 2 }, { 0 } };
//	EXPECT_EQ(leetcode::canVisitAllRooms(input), false);
//}
//#pragma endregion
#pragma region findCircleNum
TEST(findCircleNum, one)
{
	vector<vector<int>> input = { {1,1,0 }, { 1,1,0 }, { 0,0,1 }};
	EXPECT_EQ(leetcode::findCircleNum(input), 2);
}
TEST(findCircleNum, two)
{
	vector<vector<int>> input = { {1,0,0 }, { 0,1,0 }, { 0,0,1 } };
	EXPECT_EQ(leetcode::findCircleNum(input), 3);
}
#pragma endregion