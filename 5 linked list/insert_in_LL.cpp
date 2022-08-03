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

void insert_begining(struct Node *p, int n) {

     struct Node *t = new Node;

     t->data = n;
     t->next = p;
     first = t;

}

void insert_after_node(struct Node *p, int index, int n) {

     struct Node *t = new Node;
     t ->data = n;

     for(int i=0; i<index-1; i++) {
          p = p->next;
     }

     t->next = p->next;
     p->next = t; 

}

void insert_at_end(struct Node *p, int n) {
     struct Node *t = new Node;
     t->data = n;

     while(p->next != NULL) {
          p = p->next;
     }

     p->next = t;
     t->next = NULL;

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
     cout << "\noriginal linked list" << endl;
     display(first);

     insert_begining(first, 0);
     cout << "\nlinked list after inserting at begining" << endl;
     display(first);
     
     insert_after_node(first, 4, 69);
     cout << "\nafter insering at 4th node linked list is" << endl;
     display(first);

     insert_at_end(first, 96);
     cout << "\nafter insering at ending linked list is" << endl;
     display(first);


     return 0; 
}
