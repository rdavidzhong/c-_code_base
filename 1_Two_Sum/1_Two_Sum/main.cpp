//Given an array of integers, find two numbers such that they add up to a specific target number.
//
//The function twoSum should return indices of the two numbers such that they add up to the target, where index1 must be less than index2. Please note that your returned answers (both index1 and index2) are not zero-based.
//
//You may assume that each input would have exactly one solution.
//
//Input: numbers={2, 7, 11, 15}, target=9
//Output: index1=1, index2=2
//
//Subscribe to see which companies asked this question
//
//Hide Tags Array Hash Table
//Show Similar Problems



//
//  main.cpp
//  Two Sum
//
//  Created by David Zhong on 2015-12-07.
//  Copyright © 2015 David Zhong. All rights reserved.
//

#include <iostream>
#include <vector>
#include <cstdlib>
#include <unordered_map>

using namespace std;


vector<int> twoSum(vector<int>& nums, int target) {
    size_t vSize = 2;
    vector<int> result(vSize);
    unordered_map<int, int> checkTable;
    
    for (int i = 0; i < nums.size(); i++)
    {
        if (checkTable.find(target - nums[i]) == checkTable.end())
        {
            checkTable[nums[i]] = i;
        }else {
            result[0] = checkTable[target - nums[i]] + 1;
            result[1] = i + 1;
        }
    }
    return result;
}



int main() {
    return 0;
}
