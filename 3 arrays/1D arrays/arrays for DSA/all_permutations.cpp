#include<iostream>
using namespace std;

void permute(int *arr, int l, int r) {
     if(l == r) {
          for(int x = 0; x<r; x++) {
               cout << arr[x] << " ";
          }
          cout << "\n";
     } else {
          for(int i=l; i<r; i++) {
               swap(arr[i], arr[l]);

               permute(arr, l+1, r);

               swap(arr[i], arr[l]);
          }
     }
}

int main() {
     int arr[] = {1,2,3,4};
     permute(arr, 0, 4);
}
