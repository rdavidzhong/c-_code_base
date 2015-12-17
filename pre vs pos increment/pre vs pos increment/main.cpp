//
//  main.cpp
//  pre vs pos increment
//
//  Created by David Zhong on 2015-12-16.
//  Copyright © 2015 David Zhong. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int firstVal = 9;
    int secondVal = firstVal++;
    
    cout << firstVal << endl;
    
    cout << secondVal << endl;
    
    
    int firstVal1 = 9;
    //int secondVal4 = firstVal+1;
    int secondVal2 = +firstVal;
    int secondVal3 = ++firstVal;
    int secondVal4 = firstVal+1;
    
    cout << firstVal1<< endl;
    
    cout << secondVal2 << endl;
    
    cout << secondVal3 << endl;
    
    cout << secondVal4 << endl;
    
    return 0;
}
