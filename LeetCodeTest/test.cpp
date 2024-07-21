#include "pch.h"
#include "../LeetCode/724_Find_Pivot_Index.h"
using namespace leetcode;

TEST(pivotIndex, pivotTestOne) 
{
	int expected = 3;
	std::vector<int> input = { 1,7,3,6,5,6 };
	const int actual = PivotIndex::pivotIndex(input);
	EXPECT_EQ(expected, actual);
	//EXPECT_TRUE(true);
}