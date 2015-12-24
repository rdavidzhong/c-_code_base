//
//  main.cpp
//  50 Pow(x, n)
//
//  Created by David Zhong on 2015-12-23.
//  Copyright © 2015 David Zhong. All rights reserved.
//

/*
 Implement pow(x, n).
 
 Subscribe to see which companies asked this question
 
 Hide Tags Math Binary Search
 Show Similar Problems

 */
#include <iostream>
#include <math.h>

using namespace std;

double myPow(double x, int n) {
    if(n == 0)
    {
        return 1;
    }
    else if(n == 1)
    {
        return x;
    }
    
    double v = pow(x, n / 2);
    if(n % 2 == 0)
    {
        return v * v;
    }
    else
    {
        return v * v * v;
    }
    
}

double pow(double x, int n)
{
    if(n < 0)
    {
        return 1.0 / myPow(x, -n);
    }
    else
    {
        return myPow(x, n);
    }
}


int main(int argc, const char * argv[]) {

    cout << myPow(2, 3) << endl;
    return 0;
}
