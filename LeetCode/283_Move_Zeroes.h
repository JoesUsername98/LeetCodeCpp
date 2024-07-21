#pragma once
#include <vector>

using namespace std;
namespace leetcode
{
    class MoveZeros
    {
    public:
        void moveZeroes(vector<int>& nums);
    };

    struct TestMoveZeros {
        struct testCase
        {
            static int s_id_cntr;
            const int m_id;
            bool m_didPass;

            vector<int> m_input;
            vector<int> m_output;
            testCase(vector<int> input, vector<int> output) : m_input(input), m_output(output), m_id(s_id_cntr++) {};
        };

        vector<testCase> m_testCases;
        TestMoveZeros();
        void run();
    };

}