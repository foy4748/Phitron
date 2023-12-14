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
// LeetCode Middle of the Linked List
// https://leetcode.com/problems/middle-of-the-linked-list/submissions/
public:
    ListNode* middleNode(ListNode* head) {
        // Using Hare and Turtois technique
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }
};
