#include<iostream>
using namespace std;

int binary(int arr[], int k , int n, int low , int high) {

     if(low > high) return -1;

     int mid = (low+high)/2;
     
     if(k == arr[mid]) return mid;
     else if(k < arr[mid])
          binary(arr, k, n, low, mid-1);
     else
          binary(arr, k, n, mid+1, high);
}

int main() {
     int arr[10] = {1, 4, 16, 64, 128, 150, 175, 200, 201, 1000};
     cout << "enter element to be searched :" ;
     int k; cin >> k;

     cout << "element is present at " << binary(arr, k, sizeof(arr)/sizeof(arr[0]), 0, 9) << endl;
}
