#pragma once
#include "framework.h"
#include <vector>

#define LEETCODE_EXPORTS

using namespace std;
namespace leetcode
{
    extern LEETCODE_API int pivotIndex(vector<int>&nums);

    extern LEETCODE_API vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2);
}