// A complete binary tree is a binary tree in which all the levels are completely filled 
// except possibly the lowest one, which is filled from the left.

// A complete binary tree is just like a full binary tree, but with two major differences
// 1. All the leaf elements must lean towards the left.
// 2. The last leaf element might not have a right sibling i.e. a complete binary tree doesn't have to be a full binary tree.

#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
       int data;
       Node *left, *right;

       Node(int val){
        data = val;
        left = NULL;
        right = NULL;
       }

};

// incomplete

int main(){

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

return 0;
}