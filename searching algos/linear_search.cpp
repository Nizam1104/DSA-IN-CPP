/*
linear search searches linearly in data structures

time complexity = O(n)

space complexity = O(1)

*/

#include<iostream>
using namespace std;

int linear(int* arr, int k, int n) {

     for(int i=0; i<n; i++) {
          if(arr[i] == k) return i;
     }
     return -1;
}

int main() {
     int arr[10] = {2,4,3,6,5,10,9,7,8,1};
     int k; 
     cout << "enter element to be searched : ";
     cin>> k;

     cout << "element is present at : "<< linear(arr, k, sizeof(arr)/sizeof(arr[0])) << endl;
}
