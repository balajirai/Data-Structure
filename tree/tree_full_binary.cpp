// A full Binary tree is a special type of binary tree 
// in which every parent node/internal node has either two or no children


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


bool FullBinary(Node *root){
    if(root == NULL) return true;
    else if(root->left == NULL and root->right == NULL) return true;
    else if(root->left and root->right){
        return FullBinary(root->left) and FullBinary(root->right);
    }
    else return false;
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

    FullBinary(root);

    if (FullBinary(root))
        cout << "The Binary Tree is full"<<endl;
    else
        cout << "The Binary Tree is not full"<<endl;
return 0;
}