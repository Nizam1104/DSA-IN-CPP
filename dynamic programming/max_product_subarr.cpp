/*
given an integer array nums, find the contiguous 
subarray(containing at least one element) which 
has the largest product.

*/

#include<iostream>
#include<limits.h>
using namespace std;

int max_pro(int *nums, int n) {

     int maximum = nums[0], minimum = nums[0], ans = nums[0];

     for(int i=1; i<n; i++) {

          int premax = maximum, premin = minimum;

          maximum = max(max(nums[i], nums[i]*premax), premin * nums[i]);
          minimum = min(min(nums[i], nums[i]*premax), premin * nums[i]);

          ans = max(ans, maximum);

     }

     return ans;
}

int main() {
     // int arr[] = {2,3,0,4,2};

     // int arr[] = {-2, 0, -1, -1, 0, -1};

     // int arr[] = {2, 3, -1, -2, -1, 50};

     int arr[] = {2,-1};

     // int arr[] = {1};

     int ans = max_pro(arr, sizeof(arr)/sizeof(arr[0]));

     cout << ans << "\n";
}
