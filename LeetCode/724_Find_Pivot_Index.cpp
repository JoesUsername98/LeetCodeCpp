#include <string>
#include <iostream>
#include <numeric> 

#include "724_Find_Pivot_Index.h"
using namespace std;

namespace leetcode
{
    int PivotIndex::pivotIndex(vector<int>& nums) {
        //const auto SUM = accumulate(nums.begin(), nums.end(), 0);
        //for (
        //    int pvt = 0, lsum = 0, rsum = SUM - nums[pvt];
        //    pvt < nums.size(); 
        //    lsum += nums[pvt++], rsum -= pvt < nums.size() ? nums[pvt] : 0)
        //    if (rsum == lsum)
        //        return pvt;
        //return -1;
        for (int SUM = accumulate(nums.begin(), nums.end(), 0), pvt = 0, lsum = 0, rsum = SUM - nums[pvt]; pvt < nums.size(); lsum += nums[pvt++], rsum -= pvt < nums.size() ? nums[pvt] : 0) if (rsum == lsum) return pvt;
        return -1;
    }

    int TestPivotIndex::testCase::s_id_cntr = 0;

    TestPivotIndex::TestPivotIndex()
    {
        m_testCases.push_back(testCase({ 1,7,3,6,5,6 }, 3));
        m_testCases.push_back(testCase({ 1,2,3 }, -1));
        m_testCases.push_back(testCase({ 2,1,-1 }, 0));

    }

    void TestPivotIndex::run()
    {
        PivotIndex algo;
        for (testCase test : m_testCases)
        {
            try
            {
                int result = algo.pivotIndex(test.m_input);
                test.m_didPass = result == test.m_rtn ;
            }
            catch (exception e)
            {
                test.m_didPass == false;
            }
            std::cout << "Test #" << test.m_id << "! Result: " << (test.m_didPass ? "Passed" : "Failed") << "\n";
        }
    }


}