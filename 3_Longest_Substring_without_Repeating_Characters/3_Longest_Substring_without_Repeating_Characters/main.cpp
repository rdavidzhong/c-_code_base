//
//  main.cpp
//  3_Longest_Substring_without_Repeating_Characters
//
//  Created by David Zhong on 2015-12-09.
//  Copyright © 2015 David Zhong. All rights reserved.
//

/*
 

 
 Given a string, find the length of the longest substring without repeating characters. 
 
 For example, the longest substring without repeating letters for "abcabcbb" is "abc",
 which the length is 3. For "bbbbb" the longest substring is "b", with the length of 1.
 
 Hide Tags Hash Table Two Pointers String
 */

#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int lengthOfLongestSubstring(string stringS) {
    if (stringS.empty())
    {
        return 0;
    }
    
    unordered_map<char, int> charTable;
    int maxLength = 1;
    int pathBegin = 0;
    int pathEnd = 0;
    
    while(pathEnd < stringS.length())
    {
      if(charTable.find(stringS[pathEnd]) != charTable.end() && charTable[stringS[pathEnd]] >= pathBegin)
      {
         pathBegin = charTable[stringS[pathEnd]] + 1;
      }
         maxLength = max(maxLength, pathEnd - pathBegin +1);
         charTable[stringS[pathEnd]] = pathEnd;
         pathEnd++;
      
    }
    
    return maxLength;
}

int main(int argc, const char * argv[]) {
    
    string str("bbbbb");
    int result = lengthOfLongestSubstring(str);
    cout << result << endl;
    
    string str1("abcabcbb");
    int result1 = lengthOfLongestSubstring(str1);
    cout << result1 << endl;
    
    return 0;
}
