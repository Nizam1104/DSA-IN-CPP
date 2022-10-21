/*

time complexity is O(n2)
space complexity is O(1)


 */


#include<iostream>
using namespace std;


int main() {
     int arr[] = {3,4,1,2,6,5,9,8,0,7};
     int n = sizeof(arr)/sizeof(arr[0]);
     int i,j, temp;

     cout << n;


     for(i=0; i<n-1; i++) {
          for(j=0; j<n-i-1; j++) {
               if(arr[j] > arr[j+1]) {
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
               }
          }
     }


     cout << "sorted array is\n";

     for(i=0; i<n; i++) {
          cout << arr[i] << endl ;
     }

}
