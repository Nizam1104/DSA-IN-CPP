#include<iostream>
using namespace std;

int main() {
     int arr[] = {-1,2,-3,4,0,5,6,7,-9,-10,-11,22,-69};

     int n = sizeof(arr)/sizeof(arr[0]);

     int i= 0, j= n-1;
     while (i<j)
     {
          while(arr[i] <0) i++;
          while(arr[j] >= 0) j--;
          
          if(i<j) {
               swap(arr[i], arr[j]);
          }
     }
     
     for(i =0; i<n ; i++) {
          cout << arr[i] << "  ";
     }


}
