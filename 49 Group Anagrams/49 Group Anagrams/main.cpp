//
//  main.cpp
//  49 Group Anagrams
//
//  Created by David Zhong on 2015-12-23.
//  Copyright © 2015 David Zhong. All rights reserved.
//

/*
 
 Given an array of strings, group anagrams together.
 
 For example, given: ["eat", "tea", "tan", "ate", "nat", "bat"],
 Return:
 
 [
 ["ate", "eat","tea"],
 ["nat","tan"],
 ["bat"]
 ]
 Note:
 For the return value, each inner list's elements must follow the lexicographic order.
 All inputs will be in lower-case.
 
 */

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

vector<string> groupAnagrams(vector<string>& strs) {
    unordered_map<string, int> m;
    vector<string> r;
    
    if(strs.size() <= 1)
    {
        return r;
    }
    
    for(int i = 0; i < strs.size(); i++)
    {
        string s = strs[i];
        sort(s.begin(),s.end());
        
        auto it = m.find(s);
        if(it == m.end())
        {
            m.insert(make_pair(s,i));
        }
        else
        {
            if(it -> second >= 0)
            {
                r.push_back(strs[it -> second]);
                it->second = -1;
            }
            r.push_back(strs[i]);
        }
        
    }
    return r;
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
