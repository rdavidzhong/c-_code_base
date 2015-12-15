//
//  main.cpp
//  19 Remove Nth Node From End of List
//
//  Created by David Zhong on 2015-12-14.
//  Copyright © 2015 David Zhong. All rights reserved.
//

/*
 Given a linked list, remove the nth node from the end of list and return its head.
 
 For example,
 
 Given linked list: 1->2->3->4->5, and n = 2.
 
 After removing the second node from the end, the linked list becomes 1->2->3->5.
 Note:
 Given n will always be valid.
 Try to do this in one pass.
 
 Linked List, Two Pointers
 */


#include <iostream>

using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
};

/*
 Two pointer to track the target number
 
 After find and delete the target number (Prev->next)
 
 Prev link after (Prev->next->next)
 */
ListNode* removeNthFromEnd(ListNode* head, int n) {
    
    if(NULL == head)
        return NULL;
    ListNode *nthBefore = head;
    ListNode *nthBehind = head;
    
    while(n > 0) {
        if(NULL == nthBefore)
            return NULL;
        nthBefore = nthBefore->next;
        n--;
    }
    
    if(NULL == nthBefore) {
        head = head->next;
        delete nthBehind;
        return head;
    }
    
    while(nthBefore->next != NULL) {
        nthBefore = nthBefore->next;
        nthBehind = nthBehind->next;
    }
    
    ListNode* toDelete = nthBehind->next;
    nthBehind->next = toDelete->next;
    delete toDelete;
    return head;
}

int main(int argc, const char * argv[]) {

    return 0;
}
