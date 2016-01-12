//
//  main.cpp
//  vector1
//
//  Created by David Zhong on 2016-01-11.
//  Copyright © 2016 David Zhong. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int myarr[] = {1, 2, 3, 4};
    vector<int> v(myarr, myarr + sizeof(myarr)/sizeof(int));
    
    for(vector<int>::iterator it = v.begin(); it != v.end(); ++it)
    {
        cout << ' ' << *it;
        cout << endl;
    }
    cout << endl;
    
    return 0;
}
