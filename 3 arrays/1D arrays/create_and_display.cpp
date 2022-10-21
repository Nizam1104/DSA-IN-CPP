#include<iostream>
using namespace std;

struct Array {

     int *A;
     int size;
     int length;

};

void Display(struct Array arr) {
     int i;

     cout << "Elements are:\n";

     for(i =0; i<arr.length; i++) {
          cout << arr.A[i] << " ";
     } 
}

int main() {

     int n,i;

     struct Array arr;
     cout << "Enter size of array: "; // size means the maximum array size that you may need
     cin >> arr.size;

     arr.A = new int[arr.size];

     cout << "Enter how many elements in array: ";
     cin >> n;

     cout << "Enter all elements\n";
     for(i =0; i<n; i++) {
          cin >> arr.A[i];
     }

     arr.length =n;

     Display(arr);                                                              
} 
