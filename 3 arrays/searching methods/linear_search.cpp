#include<iostream>
using namespace std;

int linearsearch(int arr[], int key) {
     int i=0, n=10;
     for(i=0; i<n; i++) {
          if(arr[i] == key) return i;
     }
     return -1;
}

int main() {
     int arr[] = {1,4,7,8,3,2,10,15,100,0};
     int index = linearsearch(arr, 2);

     cout  << index;
}
