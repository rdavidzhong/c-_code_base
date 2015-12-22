//
//  main.cpp
//  40 Combination Sum II
//
//  Created by David Zhong on 2015-12-20.
//  Copyright © 2015 David Zhong. All rights reserved.
//

/*
 Given a collection of candidate numbers (C) and a target number (T), find all unique combinations in C where the candidate numbers sums to T.
 
 Each number in C may only be used once in the combination.
 
 Note:
 All numbers (including target) will be positive integers.
 Elements in a combination (a1, a2, … , ak) must be in non-descending order. (ie, a1 ≤ a2 ≤ … ≤ ak).
 The solution set must not contain duplicate combinations.
 For example, given candidate set 10,1,2,7,6,1,5 and target 8,
 
 A solution set is:
 [1, 7]
 [1, 2, 5]
 [2, 6]
 [1, 1, 6]
 
 Subscribe to see which companies asked this question
 
 Hide Tags Array Backtracking
 Show Similar Problems

 Thanks to siddontang for the solution.
 */

#include <iostream>
#include <vector>

using namespace std;

vector<vector<int> > vv;

void dfs(vector<int>& v, int level, vector<int>& num, int target) {
    if(target == 0) {
        vv.push_back(v);
        return;
    } else if(target < 0) {
        return;
    }
    
    for(int i = level; i < num.size(); i++) {
        if(!v.empty() && v.back() > num[i]) {
            continue;
        }
        
        
        v.push_back(num[i]);
        dfs(v, i + 1, num, target - num[i]);
        v.pop_back();
        
        while(i < num.size() - 1 && num[i] == num[i + 1]) {
            i++;
        }
    }
}

vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {

    sort(candidates.begin(), candidates.end());
    vector<int> v;
    dfs(v, 1, candidates, target);
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
 
    vector<int> n({1, 2, 3});
   
    auto vv = combinationSum2(n, 4);
    printVector2(vv);
    
    return 0;
}
