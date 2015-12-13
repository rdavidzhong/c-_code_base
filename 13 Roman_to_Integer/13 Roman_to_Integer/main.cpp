//
//  main.cpp
//  13 Roman_to_Integer
//
//  Created by David Zhong on 2015-12-12.
//  Copyright © 2015 David Zhong. All rights reserved.
//

/*
 Given a roman numeral, convert it to an integer.
 
 Input is guaranteed to be within the range from 1 to 3999.
 
 Hide Tags Math String
 

 */

#include <iostream>

using namespace std;

inline int c2n(char c){

    switch(c){
            case 'I': return 1;
            case 'v': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
        default: return 0;
    }
}

int romanToInt(string s) {
    
    int result=0;
    
    for(int i =0; i< s.size(); i++)
    {
        if(i>0&& c2n(s[i]) > c2n(s[i-1]))
        {
            result +=(c2n(s[i]) - 2*c2n(s[i-1]));
        }
        else
        {
            result += c2n(s[i]);
        }
    }
    return result;
    
}

int main(int argc, const char * argv[]) {
    
    
    return 0;
}
