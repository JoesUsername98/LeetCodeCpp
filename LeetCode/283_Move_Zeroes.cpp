#include <string>
#include <iostream>
#include "283_Move_Zeroes.h"

using namespace std;
namespace leetcode
{
    void MoveZeros::moveZeroes(vector<int>& nums) {
        int zeros = 0;
        for (int i = 0; i < nums.size() - 1; ++i)
        {
            if (nums[i] != 0) //don't swap
                continue;

            zeros++;
            if (nums[i + 1] != 0)
                std::swap(nums[i + 1 - zeros--], nums[i + 1]);
        }
    }

    int TestMoveZeros::testCase::s_id_cntr = 0;

    TestMoveZeros::TestMoveZeros()
    {
        m_testCases.push_back(testCase({ 0,5,0,3 }, { 5,3,0,0 } ));
        m_testCases.push_back(testCase({ 0, 1, 0, 3, 12 }, { 1,3,12,0,0 }));
        m_testCases.push_back(testCase({ 0 }, { 0 }));
    }

    void TestMoveZeros::run()
    {
        MoveZeros algo;
        for (testCase test : m_testCases)
        {
            try
            {
                algo.moveZeroes(test.m_input);
                test.m_didPass = equal(test.m_input.begin(), test.m_input.end(), test.m_output.begin());
            }
            catch (exception e)
            {
                test.m_didPass == false;
            }
            std::cout << "Test #" << test.m_id << "! Result: " << (test.m_didPass ? "Passed" : "Failed") << "\n";
        }
    }


}