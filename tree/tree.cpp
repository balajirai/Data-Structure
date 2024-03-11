// A tree is non-linear and a hierarchical data structure consisting of a collection of nodes 
// such that each node of the tree stores a value and a list of references to other nodes (the “children”).

#include <iostream>
using namespace std;

struct Node
{
   int data;
   //A general tree can have any number of child like more than one left and one right 
   struct Node *left_child;
   struct Node *right_child;
};

int main(){
    Node *root = new Node;
    // single element without any child
    root->data = 4;
    root->left_child = root->right_child = NULL;

    cout<<root->data<<endl;

return 0;
}