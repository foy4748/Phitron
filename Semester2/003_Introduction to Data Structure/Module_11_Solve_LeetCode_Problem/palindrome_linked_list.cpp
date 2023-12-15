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
// https://leetcode.com/problems/palindrome-linked-list
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

    void linked_list_input(ListNode* & HEAD, ListNode* & TAIL, int val){
        ListNode * newNode = new ListNode(val);
        if(!HEAD){
            HEAD = newNode;
            TAIL = newNode;
            return;
        }
        TAIL->next = newNode;
        TAIL = newNode;
    }

    bool isPalindrome(ListNode* head) {
        if(!head) return head;
        ListNode * HEAD = NULL;
        ListNode * TAIL = NULL;

        // Copying given linked list
        ListNode * temp  = head;
        while(temp){
            linked_list_input(HEAD, TAIL, temp->val);
            temp = temp->next;
        }

        // Traversing both linked list
        temp  = HEAD;
        ListNode * temp2 = head;
        reverseLinkedList(temp, temp);
        while(temp){
            if(temp->val != temp2->val){
                return false;
            }
            temp = temp->next;
            temp2 = temp2->next;
        }

        return true;
    }
};
