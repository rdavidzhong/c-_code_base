//
//  main.cpp
//  29 Divide Two Integers
//
//  Created by David Zhong on 2015-12-17.
//  Copyright © 2015 David Zhong. All rights reserved.
//

/*
 Divide two integers without using multiplication, division and mod operator.
 
 If it is overflow, return MAX_INT.

 
 Hide Tags Math Binary Search

 */
#include <iostream>

using namespace std;

int divide(int dividend, int divisor) {
    int sign = 1;
    if(dividend == 0)
        return 0;
    
    if((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0))
    {
        sign = -1;
    }
    
    unsigned int dvd = dividend > 0 ? dividend: -dividend;
    unsigned int dvs = divisor > 0 ? divisor: -divisor;
    unsigned int inc[32];
    unsigned int migValue = dvs;
    int i = 0;
    
    while (migValue > 0 && migValue <= dvd)
    {
        inc[i] =  migValue;
        migValue = migValue << 1;
        i++;
    }
    i--;
    
    unsigned int res = 0;
    while(i >= 0 && dvd != 0)
    {
        if(dvd >= inc[i])
        {
            dvd = dvd - inc[i];
            res += 1<<i;
        }
        i--;
    }
    res *= sign;
    return res;
        
}

int main(int argc, const char * argv[]) {
    
    cout << divide(9, 4) << endl;
    return 0;
}
