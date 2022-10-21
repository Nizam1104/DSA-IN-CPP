/*
given an integer array nums, find the contiguous 
subarray(containing at least one element) which 
has the largest sum.

*/

#include<iostream>
#include<limits.h>
using namespace std;

int max_sum(int *arr, int n) {
     int cursum = 0, ans = INT_MIN;

     for(int i=0; i<n; i++) {
          cursum += arr[i];
          if(cursum > ans) ans = cursum;
          if(cursum < 0) cursum = 0;
     }

     return ans;
}

int main() {
     
     // int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

     // int arr[] = {4, -1, 2, 1};

     int arr[] = {2, 3, -1, -2, 4, -1, 5};

     int ans = max_sum(arr, sizeof(arr)/sizeof(arr[0]));

     cout << ans << "\n";
}
