//
//  main.cpp
//  35 Search Insert Position
//
//  Created by David Zhong on 2015-12-19.
//  Copyright © 2015 David Zhong. All rights reserved.
//

/*
 Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
 
 You may assume no duplicates in the array.
 
 Here are few examples.
 [1,3,5,6], 5 → 2
 [1,3,5,6], 2 → 1
 [1,3,5,6], 7 → 4
 [1,3,5,6], 0 → 0
 
 */
#include <iostream>
#include <vector>

using namespace std;

int searchInsert(vector<int>& nums, int target) {
    
    int size = nums.size();
    int i;
    for(i=0; i<size; i++)
    {
        if(nums[i] >= target)
        {
            return i;
        }
    }
    return i;
}

int main(int argc, const char * argv[]) {
    
    vector<int> test= {1,3,5,6};
    
    cout << searchInsert(test, 5) <<endl;
    
    return 0;
}
