// Morris Order Traversal
// Time  : O(N)
// Space : O(1) --- Advantage

#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;

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

void morrisPreorderTraversal(node* root) {  
    while(root){  
        // If left child is null, print the current node data. Move to right child.  
        if (root->left == NULL){  
            cout<<root->data<<" ";  
            root = root->right;  
        }  
        else{  
            // Find inorder predecessor  
            node* current = root->left;  
            while (current->right && current->right != root) current = current->right;  
  
            // If the right child of inorder predecessor already points to this node  
            if (current->right == root)  {  
                current->right = NULL;  
                root = root->right;  
            }  
  
            // If right child doesn't point to this node, then print this node and make right child point to this node  
            else{  
                cout<<root->data<<" ";  
                current->right = root;  
                root = root->left;  
            }  
        }  
    }  
}

void dfsPreorder(node* root){
    if(!root) return;
    cout<<root->data<<" ";
    dfsPreorder(root->left);
    dfsPreorder(root->right);
}


int main(){
    node* root = NULL;

    // creating tree
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    root = buildTree(root);

    // Morris Traversal
    cout<<"\nMorris Preorder Traversal is : ";
    morrisPreorderTraversal(root);

    cout<<"\nNormal DFS Preorder Traversal is : ";
    dfsPreorder(root);

return 0;
}