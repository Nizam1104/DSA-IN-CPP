#include <iostream>
using namespace std;

void fun(int a[], int n) {
     int i=0; 
     for(i=0; i<n; i++) {
          printf("%d  ", a[i]);
     }
}
int main() {
     int arr[5] = {1,2,3,4,5};
     
     fun(arr, 5); // array can be passed with array name and size.
}
