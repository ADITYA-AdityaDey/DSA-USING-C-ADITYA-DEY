#include <stdio.h>
#include <stdlib.h>

// Node structure for the expression tree
typedef struct Node {
    char data;
    struct Node* left;
    struct Node* right;
} Node;

// Function to create a new node with given data
Node* createNode(char data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to check if a character is an operator
int isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

// Function to build an expression tree from a postfix expression
Node* buildExpressionTree(char postfix[]) {
    Node* stack[100]; // Assuming expression is not too long
    int top = -1;

    for (int i = 0; postfix[i] != '\0'; i++) {
        char symbol = postfix[i];

        if (!isOperator(symbol)) {
            // If it's an operand, push a new node onto the stack
            stack[++top] = createNode(symbol);
        } else {
            // If it's an operator, pop two operands from the stack
            Node* operand2 = stack[top--];
            Node* operand1 = stack[top--];

            // Create a new node for the operator and push it onto the stack
            Node* operatorNode = createNode(symbol);
            operatorNode->left = operand1;
            operatorNode->right = operand2;
            stack[++top] = operatorNode;
        }
    }

    // The final expression tree is at the top of the stack
    return stack[top];
}

// Function to evaluate an expression tree
int evaluateExpressionTree(Node* root) {
    if (root == NULL) {
        return 0;
    }

    if (!isOperator(root->data)) {
        // If it's an operand, return its value
        return root->data - '0';
    }

    // If it's an operator, recursively evaluate left and right subtrees
    int leftValue = evaluateExpressionTree(root->left);
    int rightValue = evaluateExpressionTree(root->right);

    // Perform the operation and return the result
    switch (root->data) {
        case '+': return leftValue + rightValue;
        case '-': return leftValue - rightValue;
        case '*': return leftValue * rightValue;
        case '/': return leftValue / rightValue;
        default: return 0; // Invalid operator
    }
}

// Function to print the infix expression using inorder traversal
void printInfixExpression(Node* root) {
    if (root != NULL) {
        printInfixExpression(root->left);
        printf("%c ", root->data);
        printInfixExpression(root->right);
    }
}

int main() {
    char postfixExpression[] = "23*5+";
    Node* root = buildExpressionTree(postfixExpression);

    printf("Infix Expression: ");
    printInfixExpression(root);
    
    printf("\nResult of Evaluation: %d\n", evaluateExpressionTree(root));

    return 0;
}

