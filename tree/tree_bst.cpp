#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

// preorder
void preorder(Node *root){
    if(root == NULL) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

// inorder
void inorder(Node *root){
    if(root == NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

// postorder
void postorder(Node *root){
    if(root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

// level order
void levelOrder(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()){
        Node* current = q.front();
        q.pop();

        if(current==NULL){
            // old level has been completely traversed
            cout<<endl;
            if(!q.empty()){
                // queue still has some child/children
                q.push(NULL);
            }
        }
        else{
            cout<<current->data<<" ";
            if(current->left) q.push(current->left);
            if(current->right) q.push(current->right);
        }
    }
    
}

// insertion in BST : O(log(n))
Node* insertIntoBST(Node* root, int d){
    // base case
    if(root == NULL){
        root = new Node(d);
        return root;
    }

    if(d > root->data) root->right =  insertIntoBST(root->right, d);
    else root->left = insertIntoBST(root->left, d);

    return root;
}

void takeInput(Node* &root){
    int data;
    cin>>data;
    while(data!=-1){
        root = insertIntoBST(root, data);
        cin>>data;
    }
}

int main(){
    Node *root = NULL;

    // tree : 10 8 21 7 27 5 4 3 -1
    cout<<"Enter data for BST : ";
    takeInput(root);

    cout<<"\nPreorder : ";
    preorder(root);

    cout<<"\nInorder : ";
    inorder(root);

    cout<<"\nPostorder : ";
    postorder(root);

    cout<<"\n\nLevel Order : "<<endl;
    levelOrder(root);
return 0;
}