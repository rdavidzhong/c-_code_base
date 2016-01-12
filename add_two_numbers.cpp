/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1 == NULL && l2 == NULL)
        {
            return NULL;
        }
        
        ListNode* head = new ListNode(0);
        ListNode* point = head; // Using this to track
        int carry = 0;
        while (l1 != NULL && l2 != NULL)
        {
            int sum = l1->val + l2->val + carry;
            point->next = new ListNode(sum % 10);
            carry = sum / 10;
            l1 = l1->next;
            l2 = l2->next;
            point = point->next;
        }
        
        while(l1 != NULL) {
            int sum =  carry + l1->val;
            point->next = new ListNode(sum % 10);
            carry = sum /10;
            l1 = l1->next;
            point = point->next;
        }
        
        while(l2 != NULL) {
            int sum =  carry + l2->val;
            point->next = new ListNode(sum % 10);
            carry = sum /10;
            l2 = l2->next;
            point = point->next;
        }
        
        if (carry != 0) {
            point->next = new ListNode(carry);
        }
        return head->next;
    }
};