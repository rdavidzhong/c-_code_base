//
//  main.cpp
//  2D vector
//
//  Created by David Zhong on 2015-12-13.
//  Copyright © 2015 David Zhong. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
    // declare 2D vector
    vector< vector<int> > myVector;
    // make new row (arbitrary example)
    vector<int> myRow(1,5);
    myVector.push_back(myRow);
    // add element to row
    myVector[0].push_back(1);
    
    // Print vector
    for (auto i = myRow.begin(); i != myRow.end(); ++i)
    {
        cout << *i << endl;
    }
    
    
    return 0;
}
