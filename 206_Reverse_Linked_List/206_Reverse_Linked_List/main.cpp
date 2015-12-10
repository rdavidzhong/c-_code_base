//
//  main.cpp
//  206_Reverse_Linked_List
//
//  Created by David Zhong on 2015-12-10.
//  Copyright © 2015 David Zhong. All rights reserved.
//

/*
 Reverse a singly linked list.
 
 click to show more hints.
 
 Hint:
 A linked list can be reversed either iteratively or recursively. Could you implement both?
 

 Hide Tags Linked List
 Show Similar Problems

 */

#include <iostream>

using namespace std;

struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
};

ListNode* reverseList(ListNode* head)
{
    ListNode *prev = NULL;
    ListNode* temp;
    while (head != NULL)
    {
        temp = head->next;
        head->next = prev;
        prev = head;
        head = temp;
    }
   return prev;
}


int main(int argc, const char * argv[]) {
    
    
    return 0;
}
