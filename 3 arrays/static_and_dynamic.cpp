#include<iostream>
using namespace std;

int main() {
     int staticarray[] = {1,2,3,4,5}; // array i screated in stack

     int *dynarray = new int[5]; // array is created in heap  

     for(int i=0; i<5; i++) {
          dynarray[i] = i;
     }

     for(int i=0; i<5; i++) {
          cout << staticarray[i] << "  ";
     }

     cout << endl;

     for(int i=0; i<5; i++) {
          cout << dynarray[i] << "  ";
     }

}