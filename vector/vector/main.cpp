//
//  main.cpp
//  vector
//
//  Created by David Zhong on 2015-12-07.
//  Copyright © 2015 David Zhong. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    // Dynamic array
    
    //    int size = 50;
    //    int *dArray;
    //    dArray = new int[size];
    //    delete [] dArray;
    
    size_t size = 10;
    vector<int> v(size);
    
    // Insert data into vector
    for(int i = 0; i < size; i++)
    {
        v[i] = i;
    }
    
    // Print vector
    for (auto i = v.begin(); i != v.end(); ++i)
    {
        cout << *i << endl;
    }
    
    //Using vector: don't need to delete anything
    
    return 0;
}