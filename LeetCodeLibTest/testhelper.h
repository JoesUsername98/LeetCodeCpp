#pragma once
#include "pch.h"
#include "../LeetCodeLib/leetcode.h"
#include <optional>

using namespace leetcode;
namespace testhelper
{
	template <typename T>
	ListNode* vecToList(const vector<T>& in)
	{
		ListNode* head = nullptr;
		ListNode* tail = nullptr;
		for (T val : in)
		{
			if (!head)
			{
				head = new ListNode(val);
				tail = head;
			}
			else if (head == tail)
			{
				tail = new ListNode(val);
				head->next = tail;
			}
			else
			{
				tail->next = new ListNode(val);
				tail = tail->next;
			}
		}

		return head;
	}

	template <typename T>
	vector<T> listToVec(ListNode* head)
	{
		std::vector<int> actual;
		for (ListNode* curr = head; curr; curr = curr->next)
			actual.push_back(curr->val);
		return actual;
	}

	template <typename T>
	TreeNode* vecToTree(const vector<optional<T>>& in)
	{
		if (in.empty() || !in[0].has_value()) return nullptr;

		TreeNode* root = new TreeNode(in[0].value());
		queue<TreeNode*> q;
		q.push(root);

		int i = 1;
		while (i < in.size()) {
			TreeNode* current = q.front();
			q.pop();

			// Process the left child
			if (i < in.size() && in[i].has_value()) {
				current->left = new TreeNode(in[i].value());
				q.push(current->left);
			}
			i++;

			// Process the right child
			if (i < in.size() && in[i].has_value()) {
				current->right = new TreeNode(in[i].value());
				q.push(current->right);
			}
			i++;
		}

		return root;
	}

	vector<optional<int>> treeToVect(TreeNode* root )
	{
		if (!root) return {};

		vector<optional<int>> result;
		queue<TreeNode*> q;
		q.push(root);

		while (!q.empty()) 
		{
			TreeNode* current = q.front();
			q.pop();

			// Append the value if the node is not null; append nullopt if it is
			if (current) {
				result.push_back(current->val);
				q.push(current->left);
				q.push(current->right);
			}
			else {
				result.push_back(nullopt);
			}
		}

		// Remove trailing nullopt values to match the original input format
		while (!result.empty() && !result.back().has_value()) 
		{
			result.pop_back();
		}

		return result;
	}

	template <typename T>
	TreeNode* getNodeWithVal(TreeNode* root, T val)
	{
		if (!root)
			return root;

		if (root->val == val)
			return root;

		TreeNode* left = getNodeWithVal(root->left, val);
		if (left)
			return left;

		TreeNode* right = getNodeWithVal(root->right, val);
		if (right)
			return right;

		return nullptr;
	}

}