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

void reverse(struct Node *p) {
     struct Node *q = new Node;
     struct Node *r = new Node;

     q = NULL, r = NULL;

     while(p != NULL) {
          r = q;
          q = p;
          p = p->next;
          q->next = r;
     }

     first = q;
}

void display(struct Node *p) {
     while(p!= NULL) {
          cout << p->data << " ";
          p = p->next;
     }
}

int main() {
     
     int arr[] = {1,2,3,4,5};
     int n = sizeof(arr)/sizeof(arr[0]);
     create(arr, n);
     cout << "\noriginal linked list is\n";
     display(first);

     reverse(first);
     cout << "\nlinked list after reversing is\n";
     display(first);


     return 0; 
}