//
//  main.cpp
//  21 Merge Two Sorted Lists
//
//  Created by David Zhong on 2015-12-15.
//  Copyright © 2015 David Zhong. All rights reserved.
//


/*
 Merge two sorted linked lists and return it as a new list. The new list should be made by splicing together the nodes of the first two lists.
 
 Linked List
 */

#include <iostream>

using namespace std;

struct ListNode {

    int val;
    ListNode *next;
    ListNode(int x): val(x), next(NULL) {}
};

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    if(l1 == NULL) return l2;
    if(l2 == NULL) return l1;
    
    ListNode *head = new ListNode(-1);
    ListNode *p = head;
    
    while(l1 != NULL && l2 != NULL)
    {
        if(l1->val < l2->val)
        {
            p->next = l1;
            l1 = l1->next;
        }
        else
        {
            p->next = l2;
            l2 = l2->next;
        }
        
        p = p->next;
    }
    
    if(l1 != NULL)
    {
        p->next = l1;
    }
    if(l2 != NULL)
    {
        p->next = l2;
    }
    p = head->next;
    delete head;
    return p;
}

int main(int argc, const char * argv[]) {

    return 0;
}
