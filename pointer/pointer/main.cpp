//
//  main.cpp
//  pointer
//
//  Created by David Zhong on 2015-12-10.
//  Copyright © 2015 David Zhong. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int var = 10;
    int *p;
    
    p = &var;
    
    // Value of var
    cout << "var - Value of var" << endl;
    cout << var << endl;
    cout << endl;
    
    // Value of p
    cout << "*p - Value of p" << endl;
    cout << *p << endl;
    cout << endl;
    
    // Address of var
    cout << "&var - Address of var" << endl;
    cout << &var << endl;
    cout << endl;
    
    // Address of var
    cout << "p - Address of var" << endl;
    cout << p << endl;
    cout << endl;
    
    // Address of p
    cout << "&p - Address of p" << endl;
    cout << &p << endl;
    cout << endl;
    
    return 0;
}

/* -- Results
 
 var - Value of var
 10
 
 *p - Value of p
 10
 
 &var - Address of var
 0x7fff5fbff71c
 
 p - Address of var
 0x7fff5fbff71c
 
 &p - Address of p
 0x7fff5fbff710
 
 */
