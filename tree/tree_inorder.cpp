// Preorder  :  Root > Left > Right
// Inorder   :  Left > Right > Root   (here we are)
// Postorder :  Left > Right > Root

#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node *right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }

};

// Inorder   :  Left > Right > Root
// Inorder   :  4 2 5 1 6 3 7
void inorder(Node *root){
    if(root == NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}


/*
            1
          /   \
         2      3
       /   \  /   \
      4    5  6    7
*/

int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    inorder(root);
return 0;
}