#pragma once
#include "framework.h"
#include <vector>
#include <queue>

#define LEETCODE_EXPORTS

using namespace std;
namespace leetcode
{
    extern LEETCODE_API int pivotIndex(vector<int>& nums);

    extern LEETCODE_API vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2);

    extern LEETCODE_API bool uniqueOccurrences(vector<int>& arr);

    extern LEETCODE_API bool closeStrings(string word1, string word2);

    extern LEETCODE_API int equalPairs(vector<vector<int>>& grid);

    extern LEETCODE_API string removeStars(string s);

    extern LEETCODE_API vector<int> asteroidCollision(vector<int>& asteroids);

    extern LEETCODE_API string decodeString(string s);

    extern LEETCODE_API class RecentCounter
    {
    private:
        std::queue<int> m_Q = std::queue<int>();
        const int WINDOW = 3000;

    public:
        LEETCODE_API int ping(int t);
    };

    extern LEETCODE_API string predictPartyVictory(string senate);

    extern LEETCODE_API struct ListNode {
        int val;
        ListNode* next;
        ListNode() : val(0), next(nullptr) {}
        ListNode(int x) : val(x), next(nullptr) {}
        ListNode(int x, ListNode* next) : val(x), next(next) {}
    };

    extern LEETCODE_API ListNode* deleteMiddle(ListNode* head);

    extern LEETCODE_API ListNode* oddEvenList(ListNode* head);

    extern LEETCODE_API ListNode* reverseList(ListNode* head);
}