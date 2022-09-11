/*
the array or list must be sorted to apply binary seaech algorithm
time complexity = O(log(n))
space complexity is O(1)
*/

#include<iostream>
using namespace std;

int binary(int arr[], int k , int n) {
     int left=0, right = n-1, middle ;

     for(int i=0; i<n; i++) {
          middle = (left+right)/2;
          if(arr[middle] == k) return middle;

          if(arr[middle] < k) left = middle+1;
          else right = middle-1;
     }

     return -1;
}

int main() {
     int arr[10] = {1, 4, 16, 64, 128, 150, 175, 200, 201, 1000};
     cout << "enter element to be searched :" ;
     int k; cin >> k;

     cout << "element is present at " << binary(arr, k, sizeof(arr)/sizeof(arr[0])) << endl;
}
