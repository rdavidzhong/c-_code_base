//
//  main.cpp
//  27 Remove Element
//
//  Created by David Zhong on 2015-12-17.
//  Copyright © 2015 David Zhong. All rights reserved.
//

/*
 Given an array and a value, remove all instances of that value in place and return the new length.
 
 The order of elements can be changed. It doesn't matter what you leave beyond the new length.
 
 */

#include <iostream>
#include <vector>

using namespace std;

int removeElement(vector<int>& nums, int val) {
    int i = 0, j = nums.size() - 1;
    
    while(i <= j)
    {
        while (i <= j && nums[i] != val)
        {
            i++;
        }
        while (i <= j && nums[j] == val)
        {
            j--;
        }
        if(i <= j)
        {
            nums[i] = nums[j];
            i++;
            j--;
        }
    }
    return j + 1;
}

int main(int argc, const char * argv[]) {

    return 0;
}
