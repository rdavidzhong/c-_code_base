//
//  main.cpp
//  43 Multiply Strings
//
//  Created by David Zhong on 2015-12-21.
//  Copyright © 2015 David Zhong. All rights reserved.
//

/*
 Given two numbers represented as strings, return multiplication of the numbers as a string.
 
 Note: The numbers can be arbitrarily large and are non-negative.
 
 Subscribe to see which companies asked this question
 
 Hide Tags Math String
 Show Similar Problems

 */
#include <iostream>
#include <string>

using namespace std;

string multiply(string num1, string num2) {
    
    if(num1.empty() || num2.empty()) {
        return "0";
    }
    
    reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end());
    
    string r(num1.size() + num2.size() + 1, '0');
    
    for(int i = 0; i < num1.size(); i++) {
        int dig1 = num1[i] - '0';
        int carry = 0;
        for(int j = 0; j < num2.size(); j++) {
            int dig2 = num2[j] - '0';
            int c = r[i + j] - '0';
            r[i + j] = (dig1 * dig2 + carry + c) % 10 + '0';
            carry = (dig1 * dig2 + carry + c) / 10;
        }
        
        if(carry > 0) {
            r[i + num2.size()] = carry + '0';
        }
    }
    
    reverse(r.begin(), r.end());
    r.erase(0, r.find_first_not_of('0'));
    return r.empty() ? "0" : r;
}

int main(int argc, const char * argv[]) {

    cout << multiply("4", "2") << endl;
    cout << multiply("123", "2") << endl;
    cout << multiply("1", "1") << endl;
    cout << multiply("3", "3") << endl;
    return 0;
}
