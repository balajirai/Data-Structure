// Constructing a binary tree
// 1 2 3 -1 4 -1 -1 -1 5 -1 -1

#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;

    // constructor
    node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};

// function to build tree (recursively)
node* buildTree(){
    int d;
    cin>>d;
    if(d==-1) return NULL;
    node* root = new node(d);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}

// printing the tree in "inorder"
void inorder(node* root){
    if(root == NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    node* root = buildTree();
    inorder(root);
return 0;
}