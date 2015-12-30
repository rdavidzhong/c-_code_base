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
    
    double price = 35.5;
    double myprice = 35.876;
    int shares = 5900;
    double cal;
    int numDisplay = 10;
 
    
    cout << "What's the price today?" << endl;
//    cin >> price;
    
    cout << "What's your avg cost?" << endl;
//    cin >> myprice;
    
    cout << "How many shares?" <<endl;
//    cin >> shares;
    
    cout << endl;
    cout << "======Increment====== " << endl << endl;
    
  
    
    for (int i = 1 ; i <= numDisplay; i++)
    {
        // Every time increment 0.2%
        cal = 1+0.002*i;
        cout << i*0.2 << "% increase"<< endl;
        cout << setprecision(4) << price*cal<< endl;
        cout << "Gain per share: " << setprecision(4) << price*cal-myprice << endl;
        cout << "Total gain: " << setprecision(5) << (price*cal-myprice)*shares << endl << endl;
    }

    cout << endl;
    
    
    cout << "======To Lower down Cost====== " << endl << endl;
    
    int more_share = 2700;
    double lowerprice = 35.60;
    double cost;
    double newPrice;
    
    cout << "How many more can you buy?" << endl;
//    cin >> more_share;
    cout << "At what price?" << endl;
//    cin >> lowerprice;
  
    cost = (myprice * shares + lowerprice * more_share)/(shares+more_share);
    
    cout << "New Avg cost: " << setprecision(4) << cost << endl << endl;
    
    cout << "How much per share right now? " << endl;
    cin >> newPrice;
    
    cal =  newPrice - cost;
    
    if (cal > 0)
    {
        cout << "Gain: " << cal << " /share" << endl;
        cout << "Total: " << cal*(shares+more_share) << endl;
    }
    else
    {
        cout << "Loss: " << cal << " /share" << endl;
        cout << "Total: " << cal*(shares+more_share) << endl;
    }
    cout << endl;
    
    
    return 0;
}

//    cout << endl;
//    cout << "Decrement " << endl;
//    cout << "1% = " << price*0.99 <<endl;
//    cout << "1.2% = " << price*0.9899 <<endl;
//    cout << "1.5% = " << price*0.985 <<endl;
//    cout << "1.8% = " << price*0.982 <<endl;
//    cout << "2% = " << price*0.98 <<endl;
