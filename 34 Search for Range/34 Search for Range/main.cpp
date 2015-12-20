//
//  main.cpp
//  34 Search for Range
//
//  Created by David Zhong on 2015-12-19.
//  Copyright © 2015 David Zhong. All rights reserved.
//

/*
 Given a sorted array of integers, find the starting and ending position of a given target value.
 
 Your algorithm's runtime complexity must be in the order of O(log n).
 
 If the target is not found in the array, return [-1, -1].
 
 For example,
 Given [5, 7, 7, 8, 8, 10] and target value 8,
 return [3, 4].
 
Solution credit: lennylxx
 */
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2);
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        int mid;
        bool found = false;
        while (low <= high) {
            mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                found = true;
                break;
            }
            else if (nums[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        
        if (found) {
            low = high = mid;
            while (low >= 0 && nums[low] == target) low--;
            while (high <= n - 1 && nums[high] == target) high++;
            
            ans[0] = low + 1;
            ans[1] = high - 1;
        }
        else {
            ans[0] = ans[1] = -1;
        }
        
        return ans;
    }
};

int main () {
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;
    Solution s;
    
    vector<int> ans = s.searchRange(nums, target);
    
    for (int i = 0; i < ans.size(); i++) {
        printf("%d ", ans[i]);
    }
    printf("\n");
    
    return 0;
}
