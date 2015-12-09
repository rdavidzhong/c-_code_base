//
//  main.cpp
//  67_Add_Binary
//
//  Created by David Zhong on 2015-12-08.
//  Copyright © 2015 David Zhong. All rights reserved.
//


//Add Binary My Submissions Question
//Total Accepted: 65603 Total Submissions: 255905 Difficulty: Easy
//Given two binary strings, return their sum (also a binary string).
//
//For example,
//a = "11"
//b = "1"
//Return "100".
//
//Subscribe to see which companies asked this question
//
//Hide Tags Math String
//Show Similar Problems

#include <iostream>
#include <vector>
#include <string>

using namespace std;

string addBinary(string a, string b) {
    
    string result;
    /*
     
     if (a.size() > b.size())
     {
        maxLength = a.begin();
     }
     else {
        maxLength = b.begin();
     
     }
     
     */
    
    int maxLength = a.size() > b.size()? a.size(): b.size();
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int carry = 0;
    
    for(int i =0; i<maxLength;i++)
    {
        int ai = i<a.size()? a[i]-'0':0;
        int bi = i<b.size()? b[i]-'0':0;
        int val = (ai+bi+carry)%2;
        carry = (ai+bi+carry)/2;
        result.insert(result.begin(), val+'0');
    }
    
    if (carry == 1)
    {
        result.insert(result.begin(),'1');
    }
    return result;
}

int main(int argc, const char * argv[]) {
    
    string a("11");
    string b("1");
    string result = addBinary(a, b);
    
    cout << result << endl;
    
    return 0;
}
