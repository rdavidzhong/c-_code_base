//
//  main.cpp
//  26 Remove Duplicates from Sorted Array
//
//  Created by David Zhong on 2015-12-16.
//  Copyright © 2015 David Zhong. All rights reserved.
//

/*
 Given a sorted array, remove the duplicates in place such that each element appear only once and return the new length.
 
 Do not allocate extra space for another array, you must do this in place with constant memory.
 
 For example,
 Given input array nums = [1,1,2],
 
 Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively. It doesn't matter what you leave beyond the new length.
 
 Hide Tags Array Two Pointers

 */

#include <iostream>
#include <vector>

using namespace std;


// Solution 1
/*
 int removeDuplicates(int A[], int n) {
 
    if(n == 0) return 0;
    int index = 0;
 
    for (int i = 0; i < n; i++)
    {
        if(A[index] == A[i])
    {
        continue;
    }
    
    index++;
    A[index] = A[i];
 
    }
        return index+1;
    }
 */

int removeDuplicates(vector<int>& nums) {
    
    if(nums.empty())
    {
        return 0;
    }
    
    int index = 0;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[index] != nums[i])
        {
            nums[++index] = nums[i];
        }
    }
    return ++index;
}

int main(int argc, const char * argv[]) {
    
    return 0;
}
