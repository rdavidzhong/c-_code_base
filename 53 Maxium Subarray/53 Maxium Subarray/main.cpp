//
//  main.cpp
//  53 Maxium Subarray
//
//  Created by David Zhong on 2015-12-24.
//  Copyright © 2015 David Zhong. All rights reserved.
//

/*
 Find the contiguous subarray within an array (containing at least one number) which has the largest sum.
 
 For example, given the array [−2,1,−3,4,−1,2,1,−5,4],
 the contiguous subarray [4,−1,2,1] has the largest sum = 6.
 
 click to show more practice.
 
 Subscribe to see which companies asked this question
 
 Hide Tags Divide and Conquer Array Dynamic Programming
 Show Similar Problems

 */

#include <iostream>
#include <vector>

using namespace std;

int divide(int A[], int left, int right, int tmax)
{
    if(left > right)
    {
        return INT_MIN;
    }
    
    int mid = (left + right) / 2;
    int lmax = divide(A, left, mid - 1, tmax);
    int rmax = divide(A, mid + 1, right, tmax);
    
    tmax = max(tmax, lmax);
    tmax = max(tmax, rmax);
    
    int sum = 0;
    int mlmax = 0;
    for(int i = mid - 1; i >= left; i--) {
        sum += A[i];
        mlmax = max(mlmax, sum);
    }
    
    sum = 0;
    int mrmax = 0;
    for(int i = mid + 1; i <= right; i++) {
        sum += A[i];
        mrmax = max(mrmax, sum);
    }
    
    tmax = max(tmax, A[mid] + mlmax + mrmax);
    return tmax;
}
//int maxSubArray(vector<int>& nums)
int maxSubArray(int A[], int n) {
    return divide(A, 0, n - 1, INT_MIN);
}


int main(int argc, const char * argv[]) {
   
    int a[] = {-2,1,-3,4,-1,2,1,-5,4};
    int n = sizeof(a) / sizeof(int);
    
    cout << maxSubArray(a, n) << endl;
    return 0;
}
