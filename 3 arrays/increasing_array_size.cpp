#include<iostream>
using namespace std;

int main() {
     int *p = new int[5]; // initially p size is 5

     int *q = new int[10];

     for(int i=0; i<5; i++) {
          q[i] = p[i];
     }

     delete p; // this deletes the array which p was pointing.
     p=q;      // now p points to the array which q is pointing.
     q=NULL; // making q null so that the array is pointed by only one pointer variable

     for(int i=0; i<10; i++) {
          p[i] = i;
     }

     for(int i =0; i<10; i++) {
          cout << p[i] << "  ";
     }

}