#include <iostream>
#include <queue> // Added missing angle brackets
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

// Main function
int main() {
    // Create a binary tree
    Node* root = newNode(1);        // Create root node with data 1
    root->left = newNode(2);        // Add left child with data 2
    root->right = newNode(3);       // Add right child with data 3
    root->left->left = newNode(4);  // Add left child of the left child with data 4
    root->left->right = newNode(5); // Add right child of the left child with data 5
    root->right->left = newNode(6); // Add left child of the right child with data 6
    root->right->right = newNode(7);// Add right child of the right child with data 7
    root->left->right->left = newNode(9);      // Add left child of the right child of the left child with data 9
    root->right->right->left = newNode(15);    // Add left child of the right child of the right child with data 15

    // Perform level order traversal of the binary tree
    cout << "Level Order traversal of binary tree is  ";
    queue<Node*> q;         // Create a queue to perform BFS
    q.push(root);           // Enqueue the root node
    
    // Iterate until the queue is empty
    while (!q.empty()) {    // Loop until the queue is not empty
        Node* node = q.front(); // Get the front element of the queue
        cout << node->data << " ";  // Print the data of the current node
        q.pop();                // Dequeue the current node

        // Enqueue the left child if it exists
        if (node->left != NULL)
            q.push(node->left);

        // Enqueue the right child if it exists
        if (node->right != NULL)
            q.push(node->right);
    }
    return 0;   // Return 0 to indicate successful completion of the program
}
