#pragma once
#include "framework.h"
#include <vector>

#define LEETCODE_EXPORTS

using namespace std;
namespace leetcode
{
    extern "C" LEETCODE_API int pivotIndex(vector<int>&nums);
}