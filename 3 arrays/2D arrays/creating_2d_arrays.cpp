#include<iostream>
using namespace std;

int main() {
     int a1[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

     int *a2[3]; // array of integer pointers

     a2[0] = new int[4];
     a2[1] = new int[4];
     a2[2] = new int[4]; 

     int **a3;

     a3 = new int*[3];

     a3[0] = new int[4];
     a3[1] = new int[4];
     a3[2] = new int[4];
}
