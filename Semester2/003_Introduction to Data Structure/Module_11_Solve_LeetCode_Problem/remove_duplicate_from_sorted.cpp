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
// https://leetcode.com/problems/remove-duplicates-from-sorted-list
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) return head;
        ListNode * temp = head;
        while(temp->next != NULL){
            if(temp->val == temp->next->val){
                ListNode * toBeDeleted = temp->next;
                temp->next = temp->next->next;
                delete toBeDeleted;
            }
            if(temp->next == NULL) break;
            if(temp->val != temp->next->val){
                temp = temp->next;
            }
        }
        return head;
    }
};
