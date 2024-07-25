#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Structure for a node in the binary search tree
struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

// Function to create a new node
struct TreeNode* createNode(int value) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to insert a value into the binary search tree
struct TreeNode* insert(struct TreeNode* root, int value) {
    if (root == NULL) {
        return createNode(value);
    }

    if (value < root->data) {
        root->left = insert(root->left, value);
    } else if (value > root->data) {
        root->right = insert(root->right, value);
    }

    return root;
}

// Function for non-recursive preorder traversal
void preorderTraversal(struct TreeNode* root) {
    if (root == NULL) {
        return;
    }

    struct TreeNode* stack[100];  // Assuming a maximum of 100 nodes
    int top = -1;

    stack[++top] = root;

    while (top >= 0) {
        struct TreeNode* currentNode = stack[top--];
        printf("%d ", currentNode->data);

        if (currentNode->right) {
            stack[++top] = currentNode->right;
        }

        if (currentNode->left) {
            stack[++top] = currentNode->left;
        }
    }
}

// Function for non-recursive inorder traversal
void inorderTraversal(struct TreeNode* root) {
    if (root == NULL) {
        return;
    }

    struct TreeNode* stack[100];
    int top = -1;
    struct TreeNode* currentNode = root;

    while (currentNode != NULL || top >= 0) {
        while (currentNode != NULL) {
            stack[++top] = currentNode;
            currentNode = currentNode->left;
        }

        currentNode = stack[top--];
        printf("%d ", currentNode->data);

        currentNode = currentNode->right;
    }
}

// Function for non-recursive postorder traversal
void postorderTraversal(struct TreeNode* root) {
    if (root == NULL) {
        return;
    }

    struct TreeNode* stack1[100];
    struct TreeNode* stack2[100];
    int top1 = -1, top2 = -1;

    stack1[++top1] = root;

    while (top1 >= 0) {
        struct TreeNode* currentNode = stack1[top1--];
        stack2[++top2] = currentNode;

        if (currentNode->left) {
            stack1[++top1] = currentNode->left;
        }

        if (currentNode->right) {
            stack1[++top1] = currentNode->right;
        }
    }

    while (top2 >= 0) {
        printf("%d ", stack2[top2--]->data);
    }
}

int main() {
    struct TreeNode* root = NULL;

    // Insert values into the binary search tree
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    // Perform non-recursive traversals
    printf("Preorder Traversal: ");
    preorderTraversal(root);

    printf("\nInorder Traversal: ");
    inorderTraversal(root);

    printf("\nPostorder Traversal: ");
    postorderTraversal(root);

    return 0;
}

