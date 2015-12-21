//
//  main.cpp
//  38 Count and Say
//
//  Created by David Zhong on 2015-12-19.
//  Copyright © 2015 David Zhong. All rights reserved.
//

/*
 The count-and-say sequence is the sequence of integers beginning as follows:
 1, 11, 21, 1211, 111221, ...
 
 1 is read off as "one 1" or 11.
 11 is read off as "two 1s" or 21.
 21 is read off as "one 2, then one 1" or 1211.
 Given an integer n, generate the nth sequence.
 
 Note: The sequence of integers will be represented as a string.
 
 Subscribe to see which companies asked this question
 
 Hide Tags String
 Show Similar Problems

 */
#include <iostream>
#include <sstream>

using namespace std;

string countAndSay(int n) {
    
    string seq = "1";
    int it = 1;
    while(it<n)
    {
        stringstream newSeq;
        char last = seq[0];
        int count =0;
        for(int i =0; i<= seq.size();i++)
        {
                if(seq[i] ==last)
                {
                    count ++;
                    continue;
                }
                else
                {
                    newSeq<<count<<last;
                    last = seq[i];
                    count =1;
                }
        }
        seq = newSeq.str();
        it++;
    }
    return seq;
}


int main(int argc, const char * argv[]) {
    
    
    return 0;
}
