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
// https://leetcode.com/problems/remove-linked-list-elements
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode * temp = head;
        if(!head) return head;
        while(temp && temp->next != NULL){
            if(temp->next->val == val){
                ListNode * toBeDeleted = temp->next;
                temp->next = temp->next->next;
                delete toBeDeleted;
            }
            if(temp->next == NULL) break;
            if(temp->next->val != val){
                temp = temp->next;
            }
        }
        if(head && head->val == val){
            ListNode * toBeDeleted = head;
            head = head->next;
            delete toBeDeleted;
        }
        return head;
    }
};
