//
//  main.cpp
//  append
//
//  Created by David Zhong on 2015-12-13.
//  Copyright © 2015 David Zhong. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    
    string str;
    string str1 = "test ";
    string str2 = "me";
    
    str.append("Let's ", 6);
    str.append(str1);
    str.append(str2);
    
    
    cout << str << endl;
    return 0;
}
