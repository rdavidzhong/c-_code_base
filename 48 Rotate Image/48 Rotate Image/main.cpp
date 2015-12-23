//
//  main.cpp
//  48 Rotate Image
//
//  Created by David Zhong on 2015-12-22.
//  Copyright © 2015 David Zhong. All rights reserved.
//

/*
 You are given an n x n 2D matrix representing an image.
 
 Rotate the image by 90 degrees (clockwise).
 
 Follow up:
 Could you do this in-place?
 
 array
 */
#include <iostream>
#include <vector>

using namespace std;

void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();
    if(n == 0)
    {
        return;
    }
    
    int a = n;
    for(int i = 0; i < n / 2; i++, a = a -2)
    {
        int m = a - 1;
        for(int j = 0; j < m; j++)
        {
            int t = matrix[i][i + j];
            matrix[i][i + j] = matrix[i + m - j][i];
            matrix[i + m - j][i] = matrix[i + m][i + m - j];
            matrix[i + m][i + m - j] = matrix[i + j][i + m];
            matrix[i + j][i + m] = t;
        }
    }
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
