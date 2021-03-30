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
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast = head;
        ListNode* slow = head;
        //advance fast at least n steps ahead of slow
        while(n-- && fast){
            fast=fast->next;
        }
        if(fast == NULL)
            return head->next;
        while(fast->next){
            fast = fast->next;
            slow = slow->next;
        }
        ListNode* del_this = slow->next;
        slow->next = slow->next->next;
        
        delete del_this;
        return head;
    }
};