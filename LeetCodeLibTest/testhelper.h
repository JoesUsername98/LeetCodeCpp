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
		TreeNode* root = nullptr;
		TreeNode* it = nullptr;

		bool lastBlank = false;
		bool lastTwoBlank = false;
		for (optional<T> node : in)
		{
			if( !root && node.has_value())
			{
				root = new TreeNode( node.value() );
				it = root;
				continue; 
			}

			if( node.has_value() )
			{
				lastBlank = false;

				if ( !it->left )
					it->left = new TreeNode( node.value() );
				else if ( !it->right )
					it->right = new TreeNode( node.value() );
				else 
				{
					it->left->left = new TreeNode(node.value());
					it = it->left;
				}
				continue;
			}
				
			if ( !lastBlank ) 
				lastBlank = true;
			else if (lastBlank && !lastTwoBlank)
				it = it->right;
		}
		return root;
	}
}