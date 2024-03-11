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

// Maximum in BST
Node* findMax(Node* root){
    if(!root) return NULL;
    Node* temp = root;
    while(temp->right){
        temp = temp->right;
    }
    return temp;
}

// Minimum in BST
Node* findMin(Node* root){
    if(!root) return NULL;
    Node* temp = root;
    while(temp->left){
        temp = temp->left;
    }
    return temp;
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

    Node* maxi = findMax(root);
    Node* mini = findMin(root);
    cout<<"Maximum : "<<maxi->data<<endl;
    cout<<"Minimum : "<<mini->data<<endl;
return 0;
}