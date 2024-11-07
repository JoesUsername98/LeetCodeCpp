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

    extern LEETCODE_API int pairSum(ListNode* head);

    extern LEETCODE_API struct TreeNode {
        int val;
        TreeNode* left;
        TreeNode* right;
        TreeNode() : val(0), left(nullptr), right(nullptr) {}
        TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
        TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
    };

    extern LEETCODE_API int maxDepth(TreeNode* root);

    extern LEETCODE_API bool leafSimilar(TreeNode* root1, TreeNode* root2);

    extern LEETCODE_API int goodNodes(TreeNode* root);

    extern LEETCODE_API int pathSum3(TreeNode* root, int targetSum);

    extern LEETCODE_API int longestZigZag(TreeNode* root);

    extern LEETCODE_API TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q);

    extern LEETCODE_API vector<int> rightSideView(TreeNode* root);

    extern LEETCODE_API int maxLevelSum(TreeNode* root);

    extern LEETCODE_API TreeNode* searchBST(TreeNode* root, int val);

    extern LEETCODE_API TreeNode* deleteNode(TreeNode* root, int val);

    extern LEETCODE_API bool canVisitAllRooms(vector<vector<int>>& rooms);

    extern LEETCODE_API int findCircleNum(vector<vector<int>>& isConnected);

    extern LEETCODE_API int minReorder(int n, vector<vector<int>>& connections);

    extern LEETCODE_API int minReorder(int n, vector<vector<int>>& connections);

    extern LEETCODE_API vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries);

    extern LEETCODE_API int nearestExit(vector<vector<char>>& maze, vector<int>& entrance);

    extern LEETCODE_API int orangesRotting(vector<vector<int>>& grid);
}