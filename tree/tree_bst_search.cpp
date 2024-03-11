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

// searching in BST (recursive)
bool searchBST(Node* root, int target){
    // base case
    if(!root) return false;
    if(root->data==target) return true;

    else if(root->data > target) return searchBST(root->left, target);
    else return searchBST(root->right, target);
}

// searching in BST (iterative)
bool searchBSTIt(Node* root, int target){
    Node *temp = root;
    while(temp){
        if(temp->data == target) return true;
        else if(temp->data > target) temp = temp->left;
        else temp = temp->right;
    }
    return false;
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

    int target;
    cout<<"Enter data for searching : ";
    cin>>target;

    cout<<"Recursive Search : ";
    cout << (searchBST(root, target) ? "FOUND" : "NOT FOUND") << endl;

    cout<<"Iterative Search : ";
    cout << (searchBSTIt(root, target) ? "FOUND" : "NOT FOUND") << endl;
return 0;
}