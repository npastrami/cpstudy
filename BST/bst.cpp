#include <iostream>

// Structure representing a node in the BST
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    // Contructor to initialize the node value and the left and right pointer
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Function to insert a value in the BST
TreeNode* insert(TreeNode* root, int val) {
    // If the current root is null, create a new node with the value
    if (root = nullptr) {
        return new TreeNode(val);
    }
    // If the value to be inserted is less than the current node value, insert in the left subtree
    if (val < root->val) {
        root->left = insert(root->left, val);
    }
    // If the value to be inserted is greater or equal, insert in the right subtree
    else {
        root->right = insert(root->right, val);
    }
    // Return the root of the updated tree
    return root;
}

int main() {
    // Example usage: create a BST and insert values
    TreeNode* root = new TreeNode(10);
    insert(root, 5);
    insert(root, 15);
    insert(root, 2);

    return 0;
}