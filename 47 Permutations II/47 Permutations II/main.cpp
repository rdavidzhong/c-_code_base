//
//  main.cpp
//  47 Permutations II
//
//  Created by David Zhong on 2015-12-22.
//  Copyright © 2015 David Zhong. All rights reserved.
//

/*
 Given a collection of numbers that might contain duplicates, return all possible unique permutations.
 
 For example,
 [1,1,2] have the following unique permutations:
 [1,1,2], [1,2,1], and [2,1,1].
 
 backtracking

 */
#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> vv;
vector<bool> visits;

void dfs(vector<int>& v, vector<int>& num, int step) {
    if(step == num.size()) {
        vv.push_back(v);
        return;
    }
    
    for(int i = 0; i < num.size(); i++) {
        if(!visits[i]) {
            if(i > 0 && num[i] == num[i - 1] && visits[i - 1] == 0) {
                continue;
            }
            
            visits[i] = true;
            
            v.push_back(num[i]);
            
            dfs(v, num, step + 1);
            
            v.pop_back();
            visits[i] = false;
        }
    }
}

vector<vector<int>> permuteUnique(vector<int>& nums) {
    if(nums.empty())
    {
        return vv;
    }
    
    visits.resize(nums.size(), false);
    
    sort(nums.begin(), nums.end());
    
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
    
    vector<int> num({1, 1, 2});
    auto vv = permuteUnique(num);
    
    printVector2(vv);
    return 0;
}
