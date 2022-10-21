#include<iostream>
using namespace std;

struct Node {
     int data;
     struct Node *next;
}*first=NULL, *second = NULL, *third=NULL; 

void create1(int arr[], int n) {

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

void create2(int arr[], int n) {

     int i;
     struct Node *t, *last;
     second = new Node;

     second->data = arr[0];
     second->next = NULL;
     last = second;

     for(i=1; i<n; i++) {
          t = new Node;
          t->data = arr[i];
          t->next = NULL;
          last->next = t;
          last = t;
     }
     
}

void merge(struct Node *p, struct Node *q) {
     struct Node *last;

     if(p->data < q->data) {
          third = last = p;
          p = p->next;
          third ->next = NULL;
     } else {
          third = last = q;
          q = q->next;
          third ->next = NULL;
     }

     while(p && q) {
          if(p->data < q->data) {
               last ->next = p;
               last = p;
               p = p->next;
               last ->next = NULL;
          } else {
               last ->next = q;
               last = q;
               q = q->next;
               last ->next = NULL;    
          }
     }

     if(p) last ->next = p;
     if(q) last ->next = q;

}


void display(struct Node *p) {
     while(p!= NULL) {
          cout << p->data << " ";
          p = p->next;
     }
}

int main() {
     
     int arr1[] = {1,3,5,7,9};
     int n1 = sizeof(arr1)/sizeof(arr1[0]);
     int arr2[] = {1,4,6,8,10};
     int n2 = sizeof(arr2)/sizeof(arr2[0]);
     create1(arr1, n1);
     // display(first);

     create2(arr2, n2);
     // display(second);

     merge(first, second);
     display(third);

     return 0; 
}
