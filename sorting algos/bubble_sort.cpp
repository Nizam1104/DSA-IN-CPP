/*
time complexity = O(n)
space complexity = O(1)
*/

#include<iostream>
using namespace std;

void bubble(int* arr, int n) {
     int i=0, j=0;

     for(i=0; i<n; i++) {
          for(j=0; j<n-i-1; j++) {
               if(arr[j] > arr[j+1]) {
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp; 
               }
          }
     }

}

int main() {
     int arr[16] = {3,5,2,7,4,5,8,9,0,34,7,645,98,67,237};
     int n = sizeof(arr)/sizeof(arr[0]);
     bubble(arr, n);
     for(int i=0; i<n; i++) {
          cout << arr[i] << " ";
     }
}
