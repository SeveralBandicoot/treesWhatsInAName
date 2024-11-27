/*

Trees - What's in a Name? 

11/24/24

@ AJ Enrique Arguello 

Objectives: Write the .h program for a Binary Tree to use Characters (1 char & 2 nodes). 

Write a Method to create Nodes and using ‘m’ as the root, create a Tree for your 1st &
last name (up to 9 characters).

Load your name (1st and last) as the leaves of the Tree. Left for alphabetically first
and Right for second.

Create 3 Methods involving InOrder, PreOrder and PostOrder Traversals. Display
your characters with each method( ).

Create a main.cpp that will connect to the .h, create an Object, Load the Tree and
display the characters in each form

*/

#include "binaryTree.h"

int main() {
    // binary object initalization 
    binaryTree tree;

    // names (replace with your actual names, up to 9 characters each)
    string firstName = "andrew";
    string lastName = "arguello";

    // inserts characters into the tree
    for (char ch : firstName) {
        tree.insert(ch);
    }
    for (char ch : lastName) {
        tree.insert(ch);
    }

    // display the tree using different traversals
    tree.displayInOrder();
    tree.displayPreOrder();
    tree.displayPostOrder();

    return 0;
}
