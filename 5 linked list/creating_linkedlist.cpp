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
     int n = sizeof(arr)/sizeof(arr[0]);
     create(arr, n);
     display(first);

     return 0; 
}

// #include<iostream>
// using namespace std;

// struct ll {
//      int data;
//      struct ll* next;
// };


// void display(struct ll* p) {
//      while(p != NULL) {
//           cout << p->data << endl;
//           p = p->next;
//      }
// }

// int main() {

//      struct ll* first = new ll;
//      struct ll* second = new ll;

//      first->data = 1;
//      first->next = second;

//      second->data = 2;
//      second->next = NULL;

//      display(first);

// }
