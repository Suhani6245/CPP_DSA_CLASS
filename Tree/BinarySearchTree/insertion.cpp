#include <iostream>
using namespace std;

// ==========================================================
// Definition of a Binary Search Tree Node
// ==========================================================
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = right = nullptr;
    }
};

// ==========================================================
// BST Class with Insert Function
// ==========================================================
class BST {
public:
    TreeNode* root;

    BST() {
        root = nullptr;
    }

    // Insert function (recursive)
    TreeNode* insert(TreeNode* node, int val) {
        // If tree/subtree empty → insert here
        if (node == nullptr) {
            return new TreeNode(val);
        }

        if (val < node->val) {
            node->left = insert(node->left, val);
        } else {
            node->right = insert(node->right, val);
        }

        return node; // unchanged node
    }

    // Helper: call insert starting at the root
    void insertValue(int val) {
        root = insert(root, val);
    }

    // Inorder traversal (sorted output)
    void inorder(TreeNode* node) {
        if (node == nullptr) return;

        inorder(node->left);
        cout << node->val << " ";
        inorder(node->right);
    }

    void preorder(TreeNode* root) {
        if (root == NULL)
            return;

        cout << root->val << " ";
        preorder(root->left);
        preorder(root->right);
    }

    void postorder(TreeNode* root) {
        if (root == NULL)
            return;

        postorder(root->left);
        postorder(root->right);
        cout << root->val << " ";
    }


};


// Main Function

int main() {
    BST tree;

    // Insert values
    tree.insertValue(5);
    tree.insertValue(3);
    tree.insertValue(7);
    tree.insertValue(1);
    tree.insertValue(4);

    // Print tree (inorder gives sorted output)
    cout << "Inorder Traversal of BST: ";
    tree.inorder(tree.root);
    cout<<endl;
    cout << "Preorder Traversal of BST: ";
    tree.preorder(tree.root);
    cout<<endl;
    cout << "Post order Traversal of BST: ";
    tree.postorder(tree.root);
    cout<<endl;


    return 0;
}
