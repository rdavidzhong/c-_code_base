//
//  main.cpp
//  investment tool
//
//  Created by David Zhong on 2015-12-29.
//  Copyright © 2015 David Zhong. All rights reserved.
//

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(int argc, const char * argv[]) {
    
    double price;
    double myprice;
    int shares;
    double cal;
    
    cout << "What's the price today?" << endl;
    cin >> price;
    
    cout << "What's your avg price?" << endl;
    cin >> myprice;
    
    cout << "How many shares?" <<endl;
    cin >> shares;
    
    cout << endl;
    cout << "===Increment=== " << endl << endl;
    
    // 20 is 2%
    for (int i = 1 ; i <= 20; i++)
    {
        cal = 1+0.001*i;
        cout << i*0.1 << "% increase"<< endl;
        cout << setprecision(4) << price*cal<< endl;
        cout << "Gain per share: " << setprecision(4) << price*cal-myprice << endl;
        cout << "Total gain: " << setprecision(5) << (price*cal-myprice)*shares << endl << endl;
        
    }
    
//    cout << "1% = " << setprecision(4) << price*1.01 << endl;
//    cout << "Gain per share: " << setprecision(4) << price*1.01-myprice << endl;
//    cout << "Total gain: " << setprecision(5) << (price*1.01-myprice)*shares << endl << endl;
//    
//    cout << "1.2% = "  << price*1.012 <<endl;
//    cout << "Gain per share: " << setprecision(4) << price*1.012-myprice << endl;
//    cout << "Total gain: " << setprecision(5) << (price*1.012-myprice)*shares << endl << endl;
//    
//    cout << "1.5% = " << price*1.015 <<endl;
//    cout << "1.8% = " << price*1.018 <<endl;
//    cout << "2% = " << price*1.02 <<endl;
//    
//    cout << endl;
//    cout << "Decrement " << endl;
//    cout << "1% = " << price*0.99 <<endl;
//    cout << "1.2% = " << price*0.9899 <<endl;
//    cout << "1.5% = " << price*0.985 <<endl;
//    cout << "1.8% = " << price*0.982 <<endl;
//    cout << "2% = " << price*0.98 <<endl;
    
    cout << endl;
    
    
    
    
    return 0;
}
