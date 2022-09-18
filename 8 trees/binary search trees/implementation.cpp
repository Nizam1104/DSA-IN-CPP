#include<iostream>
using namespace std;

struct node {
     int data;
     node *left, *right;

     node(int val) {
          data = val;
          left = NULL;
          right = NULL;
     }
};


node* insertBST(node *root, int val) {

     if(root == NULL) {
          return new node(val);
     }

     if(val < root->data) {
          root->left = insertBST(root->left, val);
     } else {
          root->right = insertBST(root->right, val);
     }

}

void printPostOrder(struct node *root) {

     if(root == NULL) {
          return;
     }

     printPostOrder(root->left);

     printPostOrder(root->right);

     cout << root->data << " ";
}

int main() {

     int arr[10] = {99,3,10,9,11,15,12,6,1,0};

     node *root = NULL;

     root = insertBST(root, arr[0]);

     for(int i=1; i<10; i++) {

          insertBST(root, arr[i]);

     }

     printPostOrder(root);

}
