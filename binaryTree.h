#include <iostream>
#include <string>
using namespace std;

// Node structure
struct Node {
    char data;        // Character stored in the node
    Node* left;       // Pointer to the left child
    Node* right;      // Pointer to the right child

    // Constructor to initialize a node
    Node(char value) : data(value), left(nullptr), right(nullptr) {}
};

// BinaryTree class
class binaryTree {
private:
    Node* root; // Root of the tree

    // Private recursive helper methods for traversals
    void inOrder(Node* node) {
        if (node == nullptr) return;
        inOrder(node->left);
        cout << node->data << " ";
        inOrder(node->right);
    }

    void preOrder(Node* node) {
        if (node == nullptr) return;
        cout << node->data << " ";
        preOrder(node->left);
        preOrder(node->right);
    }

    void postOrder(Node* node) {
        if (node == nullptr) return;
        postOrder(node->left);
        postOrder(node->right);
        cout << node->data << " ";
    }

    // Private helper method to insert nodes into the tree
    Node* insertNode(Node* node, char value) {
        if (node == nullptr) {
            return new Node(value);
        }
        if (value < node->data) {
            node->left = insertNode(node->left, value);
        } else {
            node->right = insertNode(node->right, value);
        }
        return node;
    }

public:
    // Constructor to initialize the tree with 'm' as the root
    binaryTree() : root(new Node('m')) {}

    // Method to insert a character into the tree
    void insert(char value) {
        root = insertNode(root, value);
    }

    // Traversal methods
    void displayInOrder() {
        cout << "InOrder Traversal: ";
        inOrder(root);
        cout << endl;
    }

    void displayPreOrder() {
        cout << "PreOrder Traversal: ";
        preOrder(root);
        cout << endl;
    }

    void displayPostOrder() {
        cout << "PostOrder Traversal: ";
        postOrder(root);
        cout << endl;
    }
};
