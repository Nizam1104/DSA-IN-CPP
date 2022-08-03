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

void remove_dupe(struct Node *p) {
     struct Node *q = new Node;
     q = p->next;

     while(q != NULL) {
          if(p->data != q->data) {
          p = q;
          q = q->next;
     } else {
          p->next = q->next;
          free(q);
          q = p->next;
     }
     }
}

void display(struct Node *p) {
     while(p!= NULL) {
          cout << p->data << " ";
          p = p->next;
     }
}

int main() {
     
     int arr[] = {1,2,3,3,4,4,4,5,5,6};

     create(arr, 10);
     cout << "\noriginal linked list is" << endl;
     display(first);

     remove_dupe(first);
     cout << "\nafter deleting dulicates linked list is" << endl;
     display(first);

     return 0; 
}
