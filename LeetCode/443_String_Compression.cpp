#include <string>
#include <iostream>
#include "443_String_Compression.h"

using namespace std;
namespace leetcode
{
    int StringCompression::compress(vector<char>& chars) {
        std::string result = { chars[0] };
        int agg = 1;
        for (int i = 1; i < chars.size(); i++)
        {
            if (result[result.length() - 1] == chars[i]) //same char
            {
                ++agg;
                continue;
            }
            if (agg > 1)
                result.append(to_string(agg));
            result.append({ chars[i] });
            agg = 1;
        }

        if(agg >1 )
            result.append(to_string(agg));

        return result.size();
    }

    int TestStringCompression::testCase::s_id_cntr = 0;

    TestStringCompression::TestStringCompression()
    {
        //m_testCases.push_back(testCase({ 'a', 'b', 'a' }, { 'a', 'b', 'a' }, 3));
        //m_testCases.push_back(testCase({ 'a' }, { 'a' }, 1));
        //m_testCases.push_back(testCase({ 'a', 'b', 'b','b','b','b','b','b','b','b','b','b','b' }, { 'a', 'b', '1','2'}, 4));
        m_testCases.push_back(testCase({ 'a', 'a', 'b', 'b', 'c', 'c', 'c' }, { 'a','2','b','2','c','3' }, 6));

        
    }

    void TestStringCompression::run()
    {
        StringCompression algo;
        for( testCase test : m_testCases )
        {
            try 
            {
                int out = algo.compress(test.m_input);
                test.m_didPass = out == test.m_rtn && equal(test.m_input.begin(), test.m_input.end(), test.m_modifiedInput.begin());
            }
            catch (exception e) 
            {
                test.m_didPass == false;
            }
            std::cout << "Test #" << test.m_id << "! Result: " << (test.m_didPass ? "Passed": "Failed") << "\n";
        }
    }


}