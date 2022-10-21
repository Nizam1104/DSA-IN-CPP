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

// string printPreorder(struct node* node, string s, string par)
// {
//     if (node == NULL)
//         return "";
  
//     /* first print data of node */
// //     cout << node->data << " ";

//      s = s + par + to_string(node->data);
  
//     /* then recur on left subtree */
//     printPreorder(node->left, s, "(");
  
//     /* now recur on right subtree */
//     printPreorder(node->right, s, ")");
// }

// string tr_to_str(struct node* node, string s, char par) {

// }

string tree2str(TreeNode* root) {

		string ans = to_string(root->val);
		if (root->left) //left side check
			ans += "(" + tree2str(root->left) + ")";
		if (root->right) { //right side check
			if (!root->left) ans += "()"; //left side not present, but right side present
			ans += "(" + tree2str(root->right) + ")"; 
		}
		return ans;
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

     string s="", p="";

     string ans = tree2str(root_node, s, p);

     cout << ans << "\n";

     
}
