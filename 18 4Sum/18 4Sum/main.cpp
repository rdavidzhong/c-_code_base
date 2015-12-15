//
//  main.cpp
//  18 4Sum
//
//  Created by David Zhong on 2015-12-14.
//  Copyright © 2015 David Zhong. All rights reserved.
//


/*
 Given an array S of n integers, are there elements a, b, c, and d in S such that a + b + c + d = target? Find all unique quadruplets in the array which gives the sum of target.
 
 Note:
 Elements in a quadruplet (a,b,c,d) must be in non-descending order. (ie, a ≤ b ≤ c ≤ d)
 The solution set must not contain duplicate quadruplets.
 For example, given array S = {1 0 -1 0 -2 2}, and target = 0.
 
 A solution set is:
 (-1,  0, 0, 1)
 (-2, -1, 1, 2)
 (-2,  0, 0, 2)
 
 array, HashTable, Two Pointers
 */

/*
 Online solution:
 
 For the reference, please have a look at my explanation of 3Sum problem because the algorithm are exactly the same. The link is as blow.
 
 My 3Sum problem answer
 
 The key idea is to downgrade the problem to a 2Sum problem eventually. And the same algorithm can be expand to NSum problem.
 
 After you had a look at my explanation of 3Sum, the code below will be extremely easy to understand.
 */

#include <iostream>
#include <vector>

using namespace std;

vector<vector<int> > fourSum(vector<int> &num, int target) {
    
    vector<vector<int> > res;
    
    if (num.empty())
        return res;
    
    std::sort(num.begin(),num.end());
    
    for (int i = 0; i < num.size(); i++) {
        
        int target_3 = target - num[i];
        
        for (int j = i + 1; j < num.size(); j++) {
            
            int target_2 = target_3 - num[j];
            
            int front = j + 1;
            int back = num.size() - 1;
            
            while(front < back) {
                
                int two_sum = num[front] + num[back];
                
                if (two_sum < target_2) front++;
                
                else if (two_sum > target_2) back--;
                
                else {
                    
                    vector<int> quadruplet(4, 0);
                    quadruplet[0] = num[i];
                    quadruplet[1] = num[j];
                    quadruplet[2] = num[front];
                    quadruplet[3] = num[back];
                    res.push_back(quadruplet);
                    
                    // Processing the duplicates of number 3
                    while (front < back && num[front] == quadruplet[2]) ++front;
                    
                    // Processing the duplicates of number 4
                    while (front < back && num[back] == quadruplet[3]) --back;
                    
                }
            }
            
            // Processing the duplicates of number 2
            while(j + 1 < num.size() && num[j + 1] == num[j]) ++j;
        }
        
        // Processing the duplicates of number 1
        while (i + 1 < num.size() && num[i + 1] == num[i]) ++i;
        
    }
    
    return res;
    
}


int main(int argc, const char * argv[]) {
    
    return 0;
}
