//
//  main.cpp
//  2_Add_Two_Number
//
//  Created by David Zhong on 2015-12-07.
//  Copyright © 2015 David Zhong. All rights reserved.
//

//You are given two linked lists representing two non-negative numbers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.
//
//Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
//Output: 7 -> 0 -> 8
//
//Subscribe to see which companies asked this question
//
//Hide Tags Linked List Math
//Show Similar Problems

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

#include <iostream>
#include <cstdlib>
using namespace std;

struct ListNode {
         int val;
         ListNode *next;
         ListNode(int x) : val(x), next(NULL) {}
};

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    if(l1 == NULL && l2 == NULL)
        return NULL;
    
    ListNode* result =  new ListNode(-1);
    ListNode *pre =  result;
    ListNode *pa = l1;
    ListNode *pb = l2;
    int carry = 0;
    
    while (pa != NULL && pa != NULL)
    {
        int av = (pa == NULL) ? 0:pa->val;
        int bv = (pb == NULL) ? 0:pb->val;
        
        ListNode * node = new ListNode ((av+bv+carry)%10);
        carry = (av+bv+carry)/10;
        pre->next = node;
        pre = pre->next;
        
        pa = pa==NULL? NULL:pa->next;
        pb = pb==NULL? NULL:pb->next;
        
    }
        if(carry > 0)
            pre->next = new ListNode(1);
        pre = result->next;
        delete result;
        return pre;
    
   
}

void printList(ListNode* head)
{
    if(NULL == head)
        return ;
    cout << head->val;
    while(head->next != NULL)
    {
        cout << "--->" << head->next->val;
        head = head->next;
    }
    cout << endl;
}

int main(int argc, const char * argv[]) {
    
    ListNode* l1 = new ListNode(2);
    ListNode* l2 = new ListNode(4);
    ListNode* l3 = new ListNode(3);
    
    ListNode* r1 = new ListNode(5);
    ListNode* r2 = new ListNode(6);
    ListNode* r3 = new ListNode(4);
    
    l1->next = l2;
    l2->next = l3;
    r1->next = r2;
    r2->next = r3;
    
    
    ListNode* result = addTwoNumbers(l1, r1);
    printList(result);
    

    
    return 0;
}
