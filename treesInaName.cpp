#include "binaryTree.h"

int main() {
    // Create a BinaryTree object
    binaryTree tree;

    // Names (replace with your actual names, up to 9 characters each)
    string firstName = "andrew";
    string lastName = "arguello";

    // Insert characters into the tree
    for (char ch : firstName) {
        tree.insert(ch);
    }
    for (char ch : lastName) {
        tree.insert(ch);
    }

    // Display the tree using different traversals
    tree.displayInOrder();
    tree.displayPreOrder();
    tree.displayPostOrder();

    return 0;
}
