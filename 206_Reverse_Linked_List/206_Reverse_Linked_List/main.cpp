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

struct ListNode* head;

void Insert(int newData){
    
    ListNode* temp1 = new ListNode(20);
    temp1->val = newData;
    temp1->next = NULL;
    
    if (head == NULL){ // empty list
        head = temp1;
        return;
    }
    
    ListNode* temp2 = new ListNode(20);
    temp2 = head;
    while(temp2->next != NULL){
        temp2 = temp2->next;
    }
    
    temp2->next = temp1;
}


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

void Print(ListNode* list){
    
    cout << "List is: ";
    while(list != NULL)
    {
        printf(" %d",list->val);
        list = list->next;
    }
    printf("\n");
}

int main(int argc, const char * argv[]) {
    
    head = NULL;
    
    for (int i = 0; i < 10; i++)
    {
        Insert(i);
    }
    Print(head);
    head = reverseList(head);
    Print(head);
    
    return 0;
}
