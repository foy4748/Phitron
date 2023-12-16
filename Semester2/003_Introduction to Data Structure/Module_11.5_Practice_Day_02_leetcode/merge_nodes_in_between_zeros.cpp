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
// https://leetcode.com/problems/merge-nodes-in-between-zeros
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head;
        ListNode* prev = NULL;
        while(temp->next){
            if(temp->next->val){
                temp->val = temp->val + temp->next->val;
                ListNode* toBeDeleted = temp->next;
                temp->next = temp->next->next;
                delete toBeDeleted;
            }else{
                prev = temp;
                temp = temp->next;
            }
        }
        cout<<prev->val<<endl;
        prev->next = NULL;
        return head;
    }
};
