#include<iostream>
using namespace std;

struct Array {

     int A[10];
     int size;
     int length;

};

void Append(struct Array *arr, int x ) {
       
     if(arr->length< arr->size) {
          arr->A[arr->length++] = x;
     } else {
          cout << "array is full append operation can not be performed";
     }

}

void Insert(struct Array *arr, int index, int x) {

     int i;

     if(index >=0 && index <=arr->length) {

          for(i=arr->length; i>index; i--) {
               arr->A[i] = arr->A[i-1];
          }

          arr->A[index] =x;
          arr->length++;
    
     }


}

void Display(struct Array arr) {
     int i;

     cout << "\nElements are:\n";

     for(i =0; i<arr.length; i++) {
          cout << arr.A[i] << " ";
     } 
}


int main() {   

     int n,i;

     struct Array arr = {{1,2,3,4,5}, 10, 5};

     Append(&arr, 10);
     Display(arr);

     Insert(&arr, 2, 9);
     Display(arr);

}
