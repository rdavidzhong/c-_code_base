//
//  main.cpp
//  17 Letter Combinations of a Phone Number
//
//  Created by David Zhong on 2015-12-14.
//  Copyright © 2015 David Zhong. All rights reserved.
//
/*
 Given a digit string, return all possible letter combinations that the number could represent.
 
 A mapping of digit to letters (just like on the telephone buttons) is given below.
 
 Input:Digit string "23"
 Output: ["ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf"].
 
 Note:
 Although the above answer is in lexicographical order, your answer could be in any order you want.
 
 hints: backtracking string
 */

/*
 2 - abc
 3 - def
 
 all combination of them 
 
 Solu:
 1: Read the number 
 2: Convert them using double for loop
 */


#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> letterCombinations(string digits) {
    
    vector<string> letterComb;
    letterComb.push_back(" ");
    string dict[] = {" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    
    for(int i=0; i<digits.size(); i++) {
        int n = letterComb.size();
        string lett = dict[digits[i]-'0']; // Excluding '0'
        
        for(int j=0; j<n; j++) {
            for(int k=1; k<lett.size(); k++) {
                string comb = letterComb[j];  //clone lettComb[j]
                comb.push_back(lett[k]);
                letterComb.push_back(comb);
            }
            letterComb[j].push_back(lett[0]);
        }
    }
    return letterComb;
}

int main(int argc, const char * argv[]) {
 
    return 0;
}
