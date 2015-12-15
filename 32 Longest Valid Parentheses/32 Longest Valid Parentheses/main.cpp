//
//  main.cpp
//  32 Longest Valid Parentheses
//
//  Created by David Zhong on 2015-12-14.
//  Copyright © 2015 David Zhong. All rights reserved.
//

/*
 Given a string containing just the characters '(' and ')', find the length of the longest valid (well-formed) parentheses substring.
 
 For "(()", the longest valid parentheses substring is "()", which has length = 2.
 
 Another example is ")()())", where the longest valid parentheses substring is "()()", which has length = 4.
 
 dynamic programming, string
 */

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int longestValidParentheses(string s) {
    stack<int> stk;
    stk.push(-1);
    
    int maxL = 0;
    for (int i = 0; i < s.size(); i++)
    {
        int t = stk.top();
        if(t != -1 && s[i] == ')' && s[t] == '(')
        {
            stk.pop();
            maxL = max(maxL, i-stk.top());
        }
        else{
            stk.push(i);
        }
    }
    return maxL;
}

int main(int argc, const char * argv[]) {
 
    return 0;
}
