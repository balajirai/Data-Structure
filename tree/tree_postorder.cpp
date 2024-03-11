// Preorder  :  Root > Left > Right   (here we are)
// Inorder   :  Left > Right > Root
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

// Postorder  :  Root > Left > Right
// Postorder  :  4 5 2 6 7 3 1
void postorder(Node *root){
    if(root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
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

    postorder(root);
return 0;
}