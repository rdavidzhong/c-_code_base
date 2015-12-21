//
//  main.cpp
//  39 Combination Sum
//
//  Created by David Zhong on 2015-12-20.
//  Copyright © 2015 David Zhong. All rights reserved.
//

/*
 Given a set of candidate numbers (C) and a target number (T), find all unique combinations in C where the candidate numbers sums to T.
 
 The same repeated number may be chosen from C unlimited number of times.
 
 Note:
 All numbers (including target) will be positive integers.
 Elements in a combination (a1, a2, … , ak) must be in non-descending order. (ie, a1 ≤ a2 ≤ … ≤ ak).
 The solution set must not contain duplicate combinations.
 For example, given candidate set 2,3,6,7 and target 7,
 A solution set is:
 [7]
 [2, 2, 3]
 
 
 Hide Tags Array, Backtracking, 2D vector
 Show Similar Problems

 source: https://github.com/siddontang/leetcode/blob/master/combination-sum.cpp
 
 */

#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> > vv;

void dfs(vector<int>& v, vector<int> &candidates, int target)
{
    if(target == 0)
    {
        vv.push_back(v);
        return;
    }
    else if(target < 0)
    {
        return;
    }
    
    for(int i = 0; i< candidates.size(); i++)
    {
        if(!v.empty() && v.back() > candidates[i])
        {
            continue;
        }
        v.push_back(candidates[i]);
        dfs(v, candidates, target - candidates[i]);
        v.pop_back();
    }
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    
    sort(candidates.begin(), candidates.end());
    vector<int> v;
    
    dfs(v, candidates, target);
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

   
    vector<int> c({2, 3, 6, 7});
    
    auto vv = combinationSum(c, 7);
    
    printVector2(vv);
    
    return 0;
}
