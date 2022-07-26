#include <iostream>
using namespace std;

int * fun(int n ) {
     int *p;
     p = (int *)malloc(n * sizeof(int));
     return p; // array can be returned as a pointer which is pointing to the base element of the array.
}

int main() {
     int *a;
     a = fun(5); // the returned array is stored in a integer pointer variable.

     for(int i=0; i<5; i++) {
          a[i] =i;
     }

     for(int i=0; i<5; i++) {
          printf("%d  ", a[i]);
     }
}