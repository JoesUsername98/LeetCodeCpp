#include "pch.h"

#include <string>
#include <iostream>
#include <numeric> 

#include "leetcode.h"

namespace leetcode
{
    int pivotIndex(std::vector<int>& nums) {
        for (int SUM = std::accumulate(nums.begin(), nums.end(), 0), pvt = 0, lsum = 0, rsum = SUM - nums[pvt]; pvt < nums.size(); lsum += nums[pvt++], rsum -= pvt < nums.size() ? nums[pvt] : 0) if (rsum == lsum) return pvt;
        return -1;
    }
}