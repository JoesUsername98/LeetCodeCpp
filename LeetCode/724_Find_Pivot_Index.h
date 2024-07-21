#pragma once

#include <vector>

using namespace std;
namespace leetcode
{
    class PivotIndex
    {
    public:
        static int pivotIndex(vector<int>& nums);
    };

    struct TestPivotIndex {
        struct testCase
        {
            static int s_id_cntr;
            const int m_id;
            bool m_didPass;
            vector<int> m_input;
            int m_rtn;

            testCase(vector<int> input, int rtn) :m_input(input), m_rtn(rtn), m_id(s_id_cntr++) {};
        };

        vector<testCase> m_testCases;
        TestPivotIndex();
        void run();
    };

}