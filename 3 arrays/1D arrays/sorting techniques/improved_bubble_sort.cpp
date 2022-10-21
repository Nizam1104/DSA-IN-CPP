/*
in improved bubble sort is based on the logic that if no swap 
is done in one pass then the array is already sorted

this can reduce time taken by algorithm in some cases


time complexity is O(n)
space complexity is O(1)


*/



#include<iostream>
using namespace std;


int main() {
     int arr[] = {3,4,0,1,2,6,5,6,7,8,9};
     int n = sizeof(arr)/sizeof(arr[0]);
     int i,j, temp;

     cout << n;


     for(i=0; i<n-1; i++) {
          bool flag = false;
          for(j=0; j<n-i-1; j++) {
               if(arr[j] > arr[j+1]) {
                    flag = true;
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
               }
          }

          if(!flag) break;

     }


     cout << "sorted array is\n";

     for(i=0; i<n; i++) {
          cout << arr[i] << endl ;
     }

}
