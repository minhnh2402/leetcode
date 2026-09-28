// @leet imports start
#include <bits/stdc++.h>
using namespace std;
// @leet imports end
// review : yes
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (nullptr == list1) return list2;
        if (nullptr == list2) return list1;
        
        ListNode * currNode = nullptr;
        
        if (list1->val > list2->val) {
            currNode = list2;
            list2 = list2->next;
        }
        else {
            currNode = list1;
            list1 = list1->next;
        }

        
        ListNode * res = currNode;


        while (list1 && list2) {
            if (list1->val < list2->val) {
                currNode->next = list1;
                list1 = list1->next;
            }
            else {
                currNode->next = list2;
                list2 = list2->next;
            }

            currNode = currNode->next;
        }
        currNode->next = list1 ? list1 : list2;
        return res;
    }
};
// @leet end
