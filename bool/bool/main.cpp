//
//  main.cpp
//  bool
//
//  Created by David Zhong on 2015-12-11.
//  Copyright © 2015 David Zhong. All rights reserved.
//

#include <iostream>

using namespace std;

bool isEqual (int x, int y)
{
    return (x==y);
    
}

int main(int argc, const char * argv[]) {
   
    int x, y;
    
    while (1<2) // Want the program keep running
    {
    
        cout << "Enter an integer: " << endl;
        cin >> x;
        cout << "Enter another integer: " << endl;
        cin >> y;
    
        if (isEqual(x, y))
        {
            cout << "They are equal" << endl;
        }
        else {
            cout << "They are not equal" << endl;
        }
        cout << endl;
    }
    
    return 0;
}
