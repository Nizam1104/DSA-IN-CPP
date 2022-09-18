/*
to find minimum element in a sorted and rotated array
condition is we sholud find it in O(log(n)) time complexity

example -->
arr = [6,7,1,2,3,4,5,6]
output = 1

hint --> find the element whose one side is bigger number and other side is smaller number

*/


#include<iostream>
using namespace std;

int solve(int *arr, int n) {
     int low = 0, high = n-1;
     int mid = (low+high)/2;

     while(low < high) {
          if((arr[mid-1] > arr[mid]) && arr[mid+1] > arr[mid]) {
               return arr[mid];
          }

          if(arr[mid] < arr[low] && arr[mid-1] < arr[mid]) {
               high = mid-1;
          }
          if(arr[mid] > arr[high] && arr[mid-1] > arr[low]) {
               low = mid+1;
          }
     }
}

int main() {
     int arr[] = {4,5,6,7,0,1,2};

     int smallest = solve(arr, sizeof(arr)/sizeof(arr[0]));

     cout << smallest << endl;

}
