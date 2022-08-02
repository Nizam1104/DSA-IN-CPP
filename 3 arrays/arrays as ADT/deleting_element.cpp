#include<iostream>
using namespace std;

struct Array {
     int A[10];
     int size;
     int length;
};

void Delete(struct Array *arr, int index) {

     int i;

     if(index >=0 && index < arr->length) {

          for(i=index; i<arr->length-1; i++) {
               arr->A[i] = arr->A[i+1]; 
          }
          arr->length--;
     }
}

void Display(struct Array arr) {
     int i;

     cout << "\nElements after deleting are:\n";

     for(i =0; i<arr.length; i++) {
          cout << arr.A[i] << " ";
     } 
}

int main() {

     struct Array arr = {{1,2,3,4,5,6}, 10, 6};

     Delete(&arr, 0);
     Display(arr);

}
