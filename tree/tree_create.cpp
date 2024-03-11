// creating a binary tree
#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    // constructor
    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildTree(node* root){
    cout<<"Enter the data : ";
    int data;
    cin>>data;
    
    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"Enter data for inserting at left of "<<data<<endl;
    root->left = buildTree(root->left);

    cout<<"Enter data for inserting at right of "<<data<<endl;
    root->right = buildTree(root->right);

    return root;
}


void levelOrder(node* root){
    queue<node*>q;
    q.push(root);

    while(!q.empty()){
        node* current = q.front();
        q.pop();

        cout<<current->data<<" ";
        
        if(current->left){
            q.push(current->left);
        }

        if(current->right){
            q.push(current->right);
        }
    }
}

int main(){
    node* root = NULL;

    // creating tree
    root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    levelOrder(root);
return 0;
}