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

int isloop(struct Node *f) {
     struct Node *p, *q;
     p=q=f;

     do {
          p = p->next;
          q = q->next;
          q = q? q->next:q;
     } while(p && q && p!=q);

     if(p==q)
     return 1;
     else
     return 0;

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

     struct Node *t1, *t2;
     t1=first->next->next;
     t2=first->next->next->next->next;
     t2->next=t1;

     cout << isloop(first) ;

     return 0; 
}