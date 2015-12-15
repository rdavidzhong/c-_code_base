//
//  main.cpp
//  20 Valid Parentheses
//
//  Created by David Zhong on 2015-12-14.
//  Copyright © 2015 David Zhong. All rights reserved.
//

/*
 Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
 
 The brackets must close in the correct order, "()" and "()[]{}" are all valid but "(]" and "([)]" are not.
 
 Hide Tags Stack String
 Show Similar Problems

 */

/*
 Given a string containing just the characters '(', ')', '{', '}', '[' and ']'.
 
 **Nothing in the middle of parentheses
 
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isValid(string s) {
    
    cout << "1" <<endl;
    vector<char> sta;
    
    if(s.size() == 0) return false;
    sta.push_back(s[0]);
    cout << "2" <<endl;
    
    for (int i = 1; i < s.size(); i++)
    {
        cout << "5" <<endl;
        if(s[i] == '(' || s[i] == '[' || s[i] == '{' )
        {cout << "3" <<endl;
            sta.push_back(s[i]);
            continue;
        }
        
        char current = sta.back();
        
        if(s[i] == ')' && current !='(')
            return false;
        if(s[i] == ']' && current !='[')
            return false;
        if(s[i] == '}' && current !='{')
            return false;
        sta.pop_back();
    }
    
    cout << "4" <<endl;
    if(sta.size() != 0) return false;
    return true;
}

int main(int argc, const char * argv[]) {
 
    string s (")(");
    if(isValid(s))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    return 0;
}
