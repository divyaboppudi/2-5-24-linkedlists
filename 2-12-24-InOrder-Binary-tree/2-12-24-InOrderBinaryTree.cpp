#include <iostream>

using namespace std;

// Define a structure for a node in the binary tree
struct Node {
    int data;           // Data stored in the node
    struct Node* left;  // Pointer to the left child node
    struct Node* right; // Pointer to the right child node
};

// Function to create a new node with the given data
Node* newNode(int data) {
    Node* temp = new Node;  // Allocate memory for the new node
    temp->data = data;      // Assign data to the new node
    temp->left = temp->right = NULL; // Initialize left and right child pointers to NULL
    return temp;            // Return the newly created node
}

// Function to print binary tree recursively in inorder
void printTreeInorder(Node* root) {
    if (root == NULL) // Base case: If the root is NULL, return
        return;
    printTreeInorder(root->left); // Traverse left subtree
    cout << root->data << " "; // Visit the current node
    printTreeInorder(root->right); // Traverse right subtree
}

// Main function
int main() {
    // Create a binary tree
    Node* root = newNode(1);        // Create root node with data 1
    root->left = newNode(2);        // Add left child with data 2
    root->right = newNode(3);       // Add right child with data 3
    root->left->left = newNode(4);  // Add left child of the left child with data 4
    root->left->right = newNode(5); // Add right child of the left child with data 5
    root->left->right->left = newNode(9);      // Add left child of the right child of the left child with data 9
    root->right->left = newNode(6); // Add left child of the right child with data 6
    root->right->right = newNode(7); // Add right child of the right child with data 7
    root->right->right->left = newNode(15); // Add left child of the right child of the right child with data 15

    // Perform inorder traversal of the binary tree
    cout << "Binary Tree (Inorder traversal):" << endl;
    printTreeInorder(root); // Call the function to print the tree inorder

    return 0; // Return 0 to indicate successful completion of the program
}
