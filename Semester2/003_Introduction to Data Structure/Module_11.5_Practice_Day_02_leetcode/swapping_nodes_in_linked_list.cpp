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
// https://leetcode.com/problems/swapping-nodes-in-a-linked-list/submissions

public:
    int sizeOfLinkedList(ListNode* head){
        int count = 0;
        ListNode* temp = head;
        while(temp){
            count++;
            temp = temp->next;
        }
        return count;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        if(!head || !head->next) return head;

        int listSize = sizeOfLinkedList(head);
        ListNode* left = NULL;
        ListNode* right = NULL;

        ListNode* temp1 = head;
        ListNode* temp2 = head;

        for(int i = 1; i<=k-1; i++){
            temp1 = temp1->next;
        }
        left = temp1;
        for(int i = 1; i<=listSize-k; i++){
            temp2 = temp2->next;
        }        
        right = temp2;
        swap(left->val, right->val);
        return head;
    }
};
