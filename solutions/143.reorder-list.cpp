// @leet imports start
#include <bits/stdc++.h>
using namespace std;
// @leet imports end

// @leet start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode * currNode = head;
        stack<ListNode *> stackListNode;
        
        while (currNode) {
            stackListNode.push(currNode);
            currNode = currNode->next;
        }

        currNode = head;

        for (int i = 0; i < stackListNode.size() - 1; i++) {
            ListNode * tail = stackListNode.top();
            ListNode * nextNode = currNode->next;
            currNode->next = tail;
            tail->next = nextNode;

            stackListNode.pop();
            currNode = nextNode;
        }

        currNode->next = nullptr;




    }
};
// @leet end
