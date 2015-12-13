//
//  main.cpp
//  14 Longest_Common_Prefix
//
//  Created by David Zhong on 2015-12-13.
//  Copyright © 2015 David Zhong. All rights reserved.
//

/*
 Write a function to find the longest common prefix string amongst an array of strings.
 
 hint: string
 */
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    string prefix;
    if(strs.size() == 0) return prefix;
    
    int len = 0;
    while(1)
    {
        char var;
        int i = 0;
        
        for(; i< strs.size(); i++)
        {
            if(i == 0)
            {
                var = strs[0][len]; // Two-dimensional array - first
            }
            if(strs[i].size() == len || var != strs[i][len])
                break;
        }
        
        if(i!=strs.size())
            break;
        len++;
        prefix.append(1, var);
    }
    
    return prefix;
}

int main(int argc, const char * argv[]) {
    
    return 0;
}
