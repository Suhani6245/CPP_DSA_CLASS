#include<iostream>
#include<queue>
using namespace std;

//DFS(Depth first search) traversal

#include <iostream>

// Define the Node structure for a binary tree
struct Node {
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

// Function to insert a new node into the binary tree (for simplicity, not a BST)
Node* insert(Node* root, int val) {
    if (root == nullptr) {
        return new Node(val);
    }
    // Simple insertion: if left child is empty, insert there, otherwise right
    if (root->left == nullptr) {
        root->left = new Node(val);
    } else if (root->right == nullptr) {
        root->right = new Node(val);
    } else {
        // If both children are occupied, we can choose a path (e.g., left subtree)
        // For a more structured tree like a BST, this logic would differ.
        root->left = insert(root->left, val); 
    }
    return root;
}

// Function to perform an in-order traversal of the tree
void inOrderTraversal(Node* root) {
    if (root == nullptr) {
        return;
    }
    inOrderTraversal(root->left);
    std::cout << root->data << " ";
    inOrderTraversal(root->right);
}

int main() {
    Node* root = nullptr; // Initialize an empty tree

    // Insert elements into the tree
    root = insert(root, 10);
    root = insert(root, 5);
    root = insert(root, 15);
    root = insert(root, 2);
    root = insert(root, 7);

    // Perform an in-order traversal to print the tree elements
    std::cout << "In-order traversal: ";
    inOrderTraversal(root);
    std::cout << std::endl;

    // Remember to deallocate memory to prevent memory leaks in a real application
    // (e.g., using a destructor or a dedicated function to delete the tree)
    return 0;
}