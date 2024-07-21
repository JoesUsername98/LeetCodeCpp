#pragma once
#include "framework.h"
#include <vector>

#define LEETCODE_EXPORTS

using namespace std;
namespace leetcode
{
    extern LEETCODE_API int pivotIndex(vector<int>&nums);

    extern LEETCODE_API vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2);

    extern LEETCODE_API bool uniqueOccurrences(vector<int>& arr);

    extern LEETCODE_API bool closeStrings(string word1, string word2);

    extern LEETCODE_API int equalPairs(vector<vector<int>>& grid);

    extern LEETCODE_API string removeStars(string s);

    extern LEETCODE_API vector<int> asteroidCollision(vector<int>& asteroids);
}