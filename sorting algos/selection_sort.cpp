





#include<iostream>
using namespace std;

void swap(int* a, int* b) {

     int temp = *a;
     *a = *b;
     *b = temp;
}

// void selection_sort(int *arr, int n) {

//      int i,j;
//      for(i=n-1; i>0; i--) {
          
//           int maxindex = 0;

//           for(j=1; j<=i; j++) {

//                if(arr[j] > arr[maxindex])
//                maxindex = j;
//           }


//           if(maxindex != i) {
//                swap(&arr[i], &arr[maxindex]);
//           }
//      }
// }

void selection_sort(int *arr, int n) {
     int i,j;

     for(i=n-1; i>0; i--) {
          int maxindex = 0;

          for(j=1; j<=i; j++) {
               if(arr[maxindex] < arr[j]) 
               maxindex = j;
          }

          if(maxindex != i) 
          swap(&arr[i], &arr[maxindex]);
     }
}

int main() {

     int arr[] = {4,3,6,8,5,2,9,0,33,22,55,64,7,8,5544,8346,564,3534,1};

     int n = sizeof(arr)/sizeof(arr[0]) , i=0;

     selection_sort(arr, n);
     for(i=0; i<n; i++) {
          cout << arr[i] << " ";
     }
}
