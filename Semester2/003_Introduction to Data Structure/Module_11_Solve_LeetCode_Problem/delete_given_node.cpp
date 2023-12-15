/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
// LeetCode 
// https://leetcode.com/problems/delete-node-in-a-linked-list
public:
    void deleteNode(ListNode* node) {
        if(!node) return;
        ListNode * toBeDeleted = node->next;
        node->val = node->next->val;
        node->next = node->next->next;
        delete toBeDeleted;
    }
};
