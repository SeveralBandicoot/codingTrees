#include <iostream>
using namespace std;

// Define the Node structure
struct Node {
    int data;       // Data value
    Node* left;     // Pointer to the left child
    Node* right;    // Pointer to the right child

    // Constructor to initialize the node
    Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

// Function to display the tree in pre-order
void preOrderDisplay(Node* root) {
    if (root == nullptr) {
        return;
    }
    cout << " " << root->data;
    preOrderDisplay(root->left);
    preOrderDisplay(root->right);
}

// Function to display the tree in in-order
void inOrderDisplay(Node* root) {
    if (root == nullptr) {
        return;
    }
    inOrderDisplay(root->left);
    cout << " " << root->data;
    inOrderDisplay(root->right);
}

// Function to display the tree in post-order
void postOrderDisplay(Node* root) {
    if (root == nullptr) {
        return;
    }
    postOrderDisplay(root->left);
    postOrderDisplay(root->right);
    cout << " " << root->data;
}

int main() {
    // Create the Binary Tree
    //       1
    //     /   \
    //    2     3
    //   / \   / \
    //  4   5 6   7
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    // Print out the traversals
    cout << "InOrder: ";
    inOrderDisplay(root);
    cout << endl;

    cout << "PreOrder: ";
    preOrderDisplay(root);
    cout << endl;

    cout << "PostOrder: ";
    postOrderDisplay(root);
    cout << endl;

    return 0;
}
