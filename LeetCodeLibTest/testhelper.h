#pragma once
#include "pch.h"
#include "../LeetCodeLib/leetcode.h"

namespace testhelper
{
	template <typename T>
	leetcode::ListNode* vecToList(const vector<T>& in)
	{
		leetcode::ListNode* head = nullptr;
		leetcode::ListNode* tail = nullptr;
		for (T val : in)
		{
			if (!head)
			{
				head = new leetcode::ListNode(val);
				tail = head;
			}
			else if (head == tail)
			{
				tail = new leetcode::ListNode(val);
				head->next = tail;
			}
			else
			{
				tail->next = new leetcode::ListNode(val);
				tail = tail->next;
			}
		}

		return head;
	}
}