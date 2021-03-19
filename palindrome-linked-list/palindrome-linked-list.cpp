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
    bool isPalindrome(ListNode* head) {
        // Find middle point
    ListNode * front = head;
    ListNode * back = head;
    while (front->next && front->next->next) {
      front = front->next->next;
      back = back->next;
    }
    // Reverse first half
    ListNode * mid = back->next;
    ListNode * second = mid;
    back->next = 0;
    ListNode * first = reverseList(head);
    // Compare the two halves
    if (!front->next && first->next)
      first = first->next;
    bool ret = true;
    while (first && second) {
      if (first->val != second->val) {
        ret = false;
        break;
      }
      first = first->next;
      second = second->next;
    }
	// Reverse it back
    reverseList(back);
    back->next = mid;
    return ret;
  }

  ListNode* reverseList(ListNode* head) {
    ListNode * prev = 0;
    ListNode * tmp;
    while (head) {
      tmp = head->next;
      head->next = prev;
      prev = head;
      head = tmp;
    }
    return prev;
  }
};
