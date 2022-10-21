#include<iostream>
using namespace std;

//reverse without extra space
void reverse1(int arr[], int n) {
     int temp, i;
     for(i=0; i<n/2; i++) {
          temp = arr[i];
          arr[i] = arr[n-i-1];
          arr[n-i-1] = temp;
     }

     //printing array
     for(i=0; i<n; i++) {
          cout << arr[i] << "  ";
     }
}

// reversing with extra space(extra array)
void reverse2(int arr[], int n) {
     int i, temparr[n];

     for(i=0; i<n; i++) {
          temparr[i] = arr[n-i-1];
     }

     for(i=0; i<n; i++) {
          arr[i] = temparr[i];
     }

     for(i=0; i<n; i++) {
          cout << arr[i] << "  ";
     }
}

int main() {
     int arr[] = {1,2,3,4,5,6,7,8,9,10};
     // reverse1(arr, 11);

     reverse2(arr, 10);

}