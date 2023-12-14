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
    int LinkSize(ListNode* head){
        ListNode* temp = head;
        int count = 0;
        while(temp != NULL){
            count++;
            temp = temp->next;
        }
        return count;
    }
    ListNode* middleNode(ListNode* head) {
        int sizeOfLinkedList = this->LinkSize(head);
        ListNode* temp = head;
        sizeOfLinkedList /= 2;
        //sizeOfLinkedList++;
        while(sizeOfLinkedList--){
            temp = temp->next;
        }
        return temp;
    }
};
