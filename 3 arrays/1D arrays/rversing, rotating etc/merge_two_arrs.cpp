#include<iostream>
using namespace std;

// void merge_(int *a1, int *a2, int n, int m) {
     
//      int i, j,k;

//      for(i=m-1, j=0; i>=0, j<m; i--, j++) {
//           if(a1[m-j] <= a2[i]) {
//                swap(a1[n-i], a2[i]);
//           }
//      }
// }

void merge_(int *A, int m, int *B, int n) {
        
        int a=m-1;
        int b=n-1;
        int i=m+n-1;    // calculate the index of the last element of the merged array
        
        // go from the back by A and B and compare and put to the A element which is larger
        while(a>=0 && b>=0){
            if(A[a]>B[b])   A[i--]=A[a--];
            else            A[i--]=B[b--];
        }
        
        // if B is longer than A just copy the rest of B to A location, otherwise no need to do anything
        while(b>=0)         A[i--]=B[b--];
    }

int main() {
     int a1[] = {1,3,5,7,9,0,0,0,0,0};
     int a2[] = {0,2,4,6,8};

     merge_(a1, 10, a2, 5);

     for(int i=0; i<10; i++) {
          cout << a1[i] << " ";
     }
}
