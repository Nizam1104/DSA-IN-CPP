/*
in improved bubble sort we check in every cycle is there is any swap or not

if there is no swap occured it means the remaining portion is already sorted so we stop sorting then.

*/



#include<iostream>
using namespace std;

void improved_bubble(int* arr, int n) {
     int i=0, j=0;

     for(i=0; i<n-1; i++) {
          int flag =0;
          for(j=0; j<n-i-1; j++) {
               if(arr[j] > arr[j+1]) {
                    flag = 1;
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp; 
               }
          }
          if(flag == 0) break;
     }

}

int main() {
     int arr[] = {3,5,4,7,2,9,65,4,8,4,48,947,484,345,78,3};

     int n = sizeof(arr)/sizeof(arr[0]);

     improved_bubble(arr, n);
     for(int i=0; i<n; i++) {
          cout << arr[i] << " ";
     }
}
