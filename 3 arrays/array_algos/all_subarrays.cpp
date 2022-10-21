#include<iostream>
using namespace std;

//time complexity = O(n^3)
// space complexity = O(1)
void subArr(int *arr, int n) {
     for(int i=0; i<n; i++) {
          for(int j=i; j<n; j++) {
               for(int k=i; k<=j; k++) {
                    cout << arr[k] << " "; 
               }
               cout << "\n";
          }
     }
}

//time complexity O(n^2)
// space compelxity O(n)

void subArr2(int *arr, int n) {
     for(int i=0; i<n; i++) {
          int temp[n-i-1];
          int tempindex =0;

          for(int j=i; j<n; j++) {
               temp[tempindex++] = arr[j];
               for(auto num: temp) {
                    cout << num << " ";
               }
               cout << "\n" ;
          }
     }
}

int main() {
     int arr[] = {1,2,3,4,5,6,7,8,9,10};

     subArr(arr, 10);
}
