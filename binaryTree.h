#include <iostream>
#include <string>
using namespace std;

struct Node { // node structure
    char data;        // character stored in the node
    Node* left;       // pointer to the left child
    Node* right;      // pointer to the right child

    // constructor to initialize a node
    Node(char value) : data(value), left(nullptr), right(nullptr) {}
};

class binaryTree { // binaryTree class
private:
    Node* root; // root of the tree

    // private recursive helper methods for traversals
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

    // private helper method to insert nodes into the tree
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
    // constructor to initialize the tree with 'm' as the root
    binaryTree() : root(new Node('m')) {}

    // method to insert a character into the tree
    void insert(char value) {
        root = insertNode(root, value);
    }

    // traversal methods
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
