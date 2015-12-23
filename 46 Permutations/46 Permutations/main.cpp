//
//  main.cpp
//  46 Permutations
//
//  Created by David Zhong on 2015-12-21.
//  Copyright © 2015 David Zhong. All rights reserved.
//

/*
 Given a collection of numbers, return all possible permutations.
 
 For example,
 [1,2,3] have the following permutations:
 [1,2,3], [1,3,2], [2,1,3], [2,3,1], [3,1,2], and [3,2,1].
 
 Subscribe to see which companies asked this question
 
 Hide Tags Backtracking
 Show Similar Problems

 */
#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> vv;
vector<bool> visits;

void dfs(vector<int>& v, vector<int>& nums, int step)
{
    if(step == nums.size())
    {
        vv.push_back(v);
        return;
    }
    
    for(int i = 0; i < nums.size(); i++)
    {
        if(!visits[i])
        {
            visits[i] = true;
            v.push_back(nums[i]);
            dfs(v,nums, step + 1);
            
            v.pop_back();
            visits[i] = false;
        }
    }
    
}

vector<vector<int>> permute(vector<int>& nums) {
    
    if(nums.empty())
    {
        return vv;
    }
    
    visits.resize(nums.size(), false);
    
    vector<int> v;
    
    dfs(v, nums, 0);
    
    return vv;
}

template<typename T>
void printVector(const vector<T>& a) {
    for(int i = 0; i < a.size(); i++) {
        cout << a[i] << "\t";
    }
    
    cout << endl;
}

template<typename T>
void printVector2(const vector<vector<T> >& a) {
    
    for(int i = 0; i < a.size(); i++) {
        printVector(a[i]);
    }
}


int main(int argc, const char * argv[]) {
    // insert code here...
    
    vector<int> v({1, 2, 3});
    auto a = permute(v);
    
    printVector2(a);
    
    return 0;
}
