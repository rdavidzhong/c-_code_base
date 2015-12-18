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
    
    
        
}

int main(int argc, const char * argv[]) {
    
    cout << divide(9, 4) << endl;
    return 0;
}
