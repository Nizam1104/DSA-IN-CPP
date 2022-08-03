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

void delete_node(struct Node *p, int index) {

     struct Node *temp = new Node;
     
     for(int i=0; i<index-2; i++) {
          p= p->next;
     }

     temp = p->next;
     p->next = temp->next;

     free(temp);   
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
     display(first);

     cout << endl;

     delete_node(first, 3);
     display(first);

     return 0; 
}