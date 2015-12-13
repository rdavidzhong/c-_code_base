//
//  main.cpp
//  12 Integer_to_Roman
//
//  Created by David Zhong on 2015-12-12.
//  Copyright © 2015 David Zhong. All rights reserved.
//

/*
 Integer to Roman My Submissions Question
 
 Given an integer, convert it to a roman numeral.
 
 Input is guaranteed to be within the range from 1 to 3999.
 
 
 Hide Tags Math String
 Show Similar Problems

 */


/*
 The numbers 1 to 10 can be expressed in Roman numerals as follows:
 I, II, III, IV, V, VI, VII, VIII, IX, X.
 
 1<=digit <=3
 digit =4
 digit = 5
 5<digit<=8
 digit =9
 */
#include <iostream>

using namespace std;

string intToRoman(int num) {
    
    char symbol[7] = { 'I','V','X', 'L','C', 'D','M'};
    string roman;
    int scale = 1000;
    
    for (int i = 6; i >= 0; i = i-2)
    {
        int digit = num/scale;
        
        if(digit != 0)
        {
            if(digit <= 3)
            {
                roman.append(digit, symbol[i]);
            }
            else if(digit == 4)
            {
                roman.append(1, symbol[i]);
                roman.append(1, symbol[i + 1]);
            }
            else if (digit == 5)
            {
                roman.append(1,symbol[i + 1]);
            }
            else if(digit <= 8)
            {
                roman.append(1,symbol[i]);
                roman.append(1, symbol[i+2]);
            }
            else if(digit == 9)
            {
                roman.append(1, symbol[i]);
                roman.append(1, symbol[i+2]);
            }
        }
        num = num%scale;
        scale = scale/10;
    }
    return roman;
   
}

int main(int argc, const char * argv[]) {

    int num = 3999;
    cout << intToRoman(num) << endl;
   
    return 0;
}
