/*

tree shape is 

                                1
                              /   \
                            /       \
                           2            3
                         /   \        /   \        
                       /       \     /     \    
                      4         5    6      7
                      
*/

#include<bits/stdc++.h>
using namespace std;

struct node {
     struct node *left;
     int data;
     struct node *right;
};

node *create_node(int n) {
     struct node *p = new node;
     p->data = n;
     p->left = NULL;
     p->right = NULL;

     return p;
}

void printPreorder(struct node* node)
{
    if (node == NULL)
        return;
  
    /* first print data of node */
    cout << node->data << " ";
  
    /* then recur on left subtree */
    printPreorder(node->left);
  
    /* now recur on right subtree */
    printPreorder(node->right);
}

void printInorder(struct node* node) {
     if(node == NULL) 
          return;
     
     printInorder(node->left);

     cout << node->data << " ";

     printInorder(node->right);
     
}

void printPostrder(struct node* node) {
     if(node == NULL) 
          return;

     printPostrder(node->left);

     printPostrder(node->right);

     cout << node->data << " ";

          
}

int main() {
     
     struct node *root_node = create_node(1);
     struct node *node1 = create_node(2);
     struct node *node2 = create_node(3);
     struct node *node3 = create_node(4);
     struct node *node4 = create_node(5);
     struct node *node5 = create_node(6);
     struct node *node6 = create_node(7);

     root_node ->left = node1;
     root_node ->right = node2;

     node1 ->left = node3;
     node1->right = node4;

     node2->left = node5;
     node2->right = node6;

     cout << "\npre order traversal : \n";

     printPreorder(root_node);

     cout << "\nInOrder traversal : \n";
     printInorder(root_node);

     cout << "\npost order traversal : \n";
     printPostrder(root_node);
}
