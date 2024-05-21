// Sum of leaf node of tree
#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Function to find the sum of left leaves in a binary tree
int sumOfLeftLeaves(TreeNode* root) {
    if (!root) {
        return 0;
    }

    int sum = 0;
    if (!root->left && !root->right) {
        sum += root->val; // Add value if it's a left leaf
    }

    return sum + sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right);
}

int main() {
    // Create a sample binary tree
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    // Calculate the sum of left leaves
    int sum = sumOfLeftLeaves(root);

    cout << "Sum of left leaves in the binary tree: " << sum << endl;

    return 0;
}