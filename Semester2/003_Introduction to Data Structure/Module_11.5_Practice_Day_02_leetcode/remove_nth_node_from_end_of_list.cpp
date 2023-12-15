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
// https://leetcode.com/problems/remove-nth-node-from-end-of-list
public:
    int sizeOfLinkedList (ListNode* head){
        int count = 0;
        ListNode* temp = head;
        while(temp){
            count++;
            temp = temp->next;
        }
        return count;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head) return head;
        int listSize = sizeOfLinkedList(head);
        if(listSize == n){ // Let's delete and update head
            ListNode* toBeDeleted = head;
            head = head->next;
            delete toBeDeleted;
            return head;
        }
        int traverseTime = listSize - n;
        if(traverseTime != 0){
            traverseTime--;
        }
        ListNode* temp = head;
        while(traverseTime != 0 && temp->next){
            temp = temp->next;
            traverseTime--;
        }
        if(temp->next == NULL){
            return NULL;
        }
        ListNode* toBeDeleted = temp->next;
        temp->next = temp->next->next;
        delete toBeDeleted;
        return head;
    }
};
