//
//  main.cpp
//  24 Swap Nodes in Pairs
//
//  Created by David Zhong on 2015-12-15.
//  Copyright © 2015 David Zhong. All rights reserved.
//
/*
 Given a linked list, swap every two adjacent nodes and return its head.
 
 For example,
 Given 1->2->3->4, you should return the list as 2->1->4->3.
 
 Your algorithm should use only constant space. You may not modify the values in the list, only nodes itself can be changed.
 
 Linked list
 */

#include <iostream>

using namespace std;

struct ListNode {
         int val;
         ListNode *next;
         ListNode(int x) : val(x), next(NULL) {}
     };

ListNode* swapPairs(ListNode* head) {
    if(head == NULL || head->next == NULL)
    {
        return head;
    }
    ListNode* nextPair = head->next->next;
    ListNode* newHead = head->next;
    
    head->next->next = head;
    head->next = swapPairs(nextPair);
    return newHead;
}

int main(int argc, const char * argv[]) {

    return 0;
}
