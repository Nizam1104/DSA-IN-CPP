





#include<iostream>
using namespace std;

void insertion_sort(int *arr, int n) {
     int i,j, key;

     for(i=0; i<n; i++) {
          key = arr[i];
          j = i-1;

          while(j>= 0 && key < arr[j]) {
               arr[j+1] = arr[j];
               j--;
          }

          arr[j+1] = key;
     }
}

int main() {

     int arr[] = {4,3,6,8,5,2,9,0,33,22,55,64,7,8,5544,8346,564,3534,1};

     int n = sizeof(arr)/sizeof(arr[0]) , i=0;

     insertion_sort(arr, n);
     for(i=0; i<n; i++) {
          cout << arr[i] << " ";
     }
}
