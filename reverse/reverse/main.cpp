//
//  main.cpp
//  reverse
//
//  Created by David Zhong on 2015-12-09.
//  Copyright © 2015 David Zhong. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    int mySize = 10;
    vector<int> myVector(mySize);
    for (int i = 1; i < 10; i++)
    {
        myVector[i] = i;
    }
    
    // Normal order
    for (auto i = myVector.begin(); i != myVector.end(); ++i)
    {
        cout << *i << ' ';
    }
    
    cout << endl;
    
    // Reverse order
    reverse(myVector.begin(), myVector.end());
    
    for (auto i = myVector.begin(); i != myVector.end(); ++i)
    {
        cout << *i << ' ';
    }
    
    cout << endl;
    
    return 0;
}
