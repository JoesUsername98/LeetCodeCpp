#pragma once
#include <vector>

using namespace std;
namespace leetcode
{
    class StringCompression 
    {
    public:
        int compress(vector<char>& chars);
    };

    struct TestStringCompression {
        struct testCase
        {
            static int s_id_cntr;
            const int m_id;
            bool m_didPass;
            vector<char> m_input;
            vector<char> m_modifiedInput;
            int m_rtn;

            testCase(vector<char> input, vector<char>modifiedInput, int rtn) : m_input(input), m_modifiedInput(modifiedInput), m_rtn(rtn), m_id(s_id_cntr++) {};
        };

        vector<testCase> m_testCases;
        TestStringCompression();
        void run();
    };

}