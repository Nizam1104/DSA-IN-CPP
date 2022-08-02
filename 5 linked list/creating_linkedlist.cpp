#include<iostream>
using namespace std;

struct Node {
     int data;
     struct Node *next;
}*first; 

void create(int arr[], int n) {

     int i;
     struct Node *t, *last;
     first = new Node;

     first->data = arr[0];
     first->next = NULL;
     last = first;

     for(i=1; i<n; i++) {
          t = new Node;
          t->data = arr[i];
          t->next = NULL;
          last->next = t;
          last = t;
     }
     
}

void display(struct Node *p) {
     while(p!= NULL) {
          cout << p->data << " ";
          p = p->next;
     }
}

int main() {
     
     int arr[] = {1,2,3,4,5};
     create(arr, 5);
     display(first);

     return 0; 
}
