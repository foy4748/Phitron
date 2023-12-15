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
// LeetCode 
// https://leetcode.com/problems/reverse-linked-list
public:
    void reverseLinkedList(ListNode* &head, ListNode* current){
        if(current->next == NULL){
            head = current;
            return;
        }
        this->reverseLinkedList(head, current->next);
        current->next->next = current;
        current->next = NULL;
    }
    ListNode* reverseList(ListNode* head) {
        if(head == NULL) return head;
        reverseLinkedList(head, head);
        return head;
    }
};
