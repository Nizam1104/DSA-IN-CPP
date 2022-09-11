





#include<iostream>
using namespace std;

void swap(int* a, int* b) {

     int temp = *a;
     *a = *b;
     *b = temp;
}

// void quick_sort(int *arr, int left, int right) {

//      if(right-left <=0) return;

//      int pivot = arr[(left+right)/2];

//      int i=left,  j= right;

//      while(i <= j) {
//           while(arr[i] < pivot) i++;
//           while(arr[j] > pivot) j--;
//           if(i <= j) {
//                swap(&arr[i], &arr[j]);
//                i++, j--;
//           }
//      }

//      quick_sort(arr, left, i-1);
//      quick_sort(arr, i, right);


// }

void quick_sort(int *arr, int left, int right) {
     
     if(right - left <=0 ) return;

     int pivot = arr[(left+right)/2];

     int i=left, j = right;

     while(i<=j) {
          while(arr[i] < pivot) i++;
          while(arr[j] > pivot) j--;

          if(i <= j) {
               swap(&arr[i], &arr[j]);
               i++, j--;
          }
     }

     quick_sort(arr, left, i-1);
     quick_sort(arr, i, right);
}

int main() {

     int arr[] = {4,3,6,8,5,2,9,0,33,22,55,64,7,8,5544,8346,564,3534,1};

     int n = sizeof(arr)/sizeof(arr[0]) , i=0;

     quick_sort(arr, 0, n-1);
     for(i=0; i<n; i++) {
          cout << arr[i] << " ";
     }
}
