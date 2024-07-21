#include "pch.h"

#include <string>
#include <iostream>
#include <numeric> 
#include <unordered_set> 

#include "leetcode.h"

namespace leetcode
{
    int pivotIndex(std::vector<int>& nums) {
        for (int SUM = std::accumulate(nums.begin(), nums.end(), 0), pvt = 0, lsum = 0, rsum = SUM - nums[pvt];
            pvt < nums.size();
            lsum += nums[pvt++], rsum -= pvt < nums.size() ? nums[pvt] : 0) 
                if (rsum == lsum) 
                    return pvt;
        return -1;
    }

    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) 
    {
        unordered_set<int> set1 (std::make_move_iterator(nums1.begin()), std::make_move_iterator(nums1.end()));
        unordered_set<int> set2 (std::make_move_iterator(nums2.begin()), std::make_move_iterator(nums2.end()));
        vector<vector<int> > answer = { {} , {} };

        for (const auto& i : set1)
            if (set2.find(i) == set2.cend())
                answer[0].push_back(i);
       
        for (const auto& i : set2)
            if (set1.find(i) == set1.cend())
                answer[1].push_back(i);

        return answer;
    }
}