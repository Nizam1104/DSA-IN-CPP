#include<iostream>
using namespace std;

int binarySearch(int arr[], int key) {
     int low=0, high =10, mid;

     while(low <= high) {
          mid = (low +high)/2;

          if(key == arr[mid]) {
               return mid;
          } else if(key < arr[mid]) {
               high = mid-1;
          } else {
               low = mid+1;
          }
     }

     return -1;
}

int main() {
     int arr[] = {1,4,7,8,9,10,14,17,19,20};
     int index = binarySearch(arr, 9);

     cout  << index;
}
