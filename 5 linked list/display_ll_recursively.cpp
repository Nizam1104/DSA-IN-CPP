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

void display1(struct Node *p) {
     if(p == NULL) {
          return;
     } else {
          cout << p->data;
          display1(p->next);
     }
}

void display2(struct Node *p) {
     if(p == NULL) {
          return;
     } else {
          display2(p->next);
          cout << p->data;
     }
}

int main() {
     
     int arr[] = {1,2,3,4,5};
     create(arr, 5);
     display1(first);
     // display2(first);

     return 0; 
}