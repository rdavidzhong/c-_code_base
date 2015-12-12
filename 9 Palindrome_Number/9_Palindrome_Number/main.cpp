//
//  main.cpp
//  9_Palindrome_Number
//
//  Created by David Zhong on 2015-12-11.
//  Copyright © 2015 David Zhong. All rights reserved.
//

/*
    A palindrome is a word, phrase, number, or other sequence of characters which reads the same backward or forward. Allowances may be made for adjustments to capital letters, punctuation, and word dividers.
 */

/*
 
 Determine whether an integer is a palindrome. Do this without extra space.
 
 click to show spoilers.
 
 Some hints:
 Could negative integers be palindromes? (ie, -1)
 
 If you are thinking of converting the integer to string, note the restriction of using extra space.
 
 You could also try reversing an integer. However, if you have solved the problem "Reverse Integer", you know that the reversed integer might overflow. How would you handle such case?
 
 There is a more generic way of solving this problem.
 
 Hide Tags Math
 
 Hint: Keep compare the first and last number and so on, till the difference met

 
 */

#include <iostream>

using namespace std;

bool isPalindrome(int x) {
    
    if(x < 0)
    {
        return false;
    }
    
    int div = 1;
    
    cout << "1 " << div << endl;
    
    while(x/div >= 10)
    {
        div = div * 10;
        cout << "2 " << div << endl;
        
    }
    
    while(x > 0)
    {
        int left = x/div;    //First digit
        cout << "left-" << left << endl;
        
        int right = x % 10; // Represent last digit of the whole number
         cout << "right-" << right << endl;
        
        if(left != right) return false;
        
        x = x%div/10;
        cout << "3 " << div << endl;
        
        div = div / 100;
        
        cout << "4 " << div << endl;
        /*
         2332
         
         2332%div /10 = 123
         div = div / 100
         div = 1/100 = 0.01
         */
    }
    
    return true;
    
}

int main(int argc, const char * argv[]) {

    int x =  2332;
    if (isPalindrome(x))
    {
        cout << "True" << endl;
    } else {
        
        cout << "false" << endl;
    }
    return 0;
}
