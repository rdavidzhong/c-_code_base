//
//  main.cpp
//  unorder_map
//
//  Created by David Zhong on 2015-12-07.
//  Copyright © 2015 David Zhong. All rights reserved.
//

#include <iostream>
#include <unordered_map>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    //    std::cout << "Hello, World!\n";
    unordered_map<string, string> mytest;
    //    mytest = {1, 2};
    
    mytest = {{"Australia","Canberra"},{"U.S.","Washington"},{"France","Paris"}};
    
    for ( auto it = mytest.begin(); it != mytest.end(); ++it )
        cout << " " << it->first << ":" << it->second;
    cout << endl;
    cout << endl;
    
    unordered_map<int, int> myNum;
    
    
    // myNum = {{1,10},{2,20},{3,30}};
    myNum = {{1,10}};
    for ( auto it = myNum.begin(); it != myNum.end(); ++it )
        cout << " " << it->first << ":" << it->second;
    cout << endl;
    
    return 0;
}
