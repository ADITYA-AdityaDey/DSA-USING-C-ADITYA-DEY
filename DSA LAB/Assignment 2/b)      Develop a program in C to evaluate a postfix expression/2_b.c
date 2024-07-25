#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


#define MAX_STACK_SIZE 100


// Define stack structure
struct stack {
    int top;
    int items[MAX_STACK_SIZE];
};


// Function to initialize stack
void initialize_stack(struct stack *s) {
    s->top = -1;
}


// Function to check if stack is full
int is_full(struct stack *s) {
    return (s->top == MAX_STACK_SIZE - 1);
}


// Function to check if stack is empty
int is_empty(struct stack *s) {
    return (s->top == -1);
}


// Function to push item into stack
void push(struct stack *s, int item) {
    if (is_full(s)) {
        printf("Stack is full.\n");
        exit(EXIT_FAILURE);
    }
    s->items[++(s->top)] = item;
}


// Function to pop item from stack
int pop(struct stack *s) {
    if (is_empty(s)) {
        printf("Stack is empty.\n");
        exit(EXIT_FAILURE);
    }
    return s->items[(s->top)--];
}


// Function to evaluate postfix expression
int evaluate_postfix(char *expression) {
    struct stack s;
    initialize_stack(&s);


    int i, operand1, operand2, result;
    char c;


    for (i = 0; expression[i] != '\0'; i++) {
        c = expression[i];


        if (isdigit(c)) {
            push(&s, c - '0');
        } else {
            operand2 = pop(&s);
            operand1 = pop(&s);


            switch (c) {
                case '+':
                    result = operand1 + operand2;
                    break;
                case '-':
                    result = operand1 - operand2;
                    break;
                case '*':
                    result = operand1 * operand2;
                    break;
                case '/':
                    result = operand1 / operand2;
                    break;
                default:
                    printf("Invalid operator.\n");
                    exit(EXIT_FAILURE);
            }


            push(&s, result);
        }
    }


    result = pop(&s);
    if (!is_empty(&s)) {
        printf("Invalid expression.\n");
        exit(EXIT_FAILURE);
    }


    return result;
}


// Driver function
int main() {
    char expression[MAX_STACK_SIZE];
    printf("Enter postfix expression: ");
    scanf("%s", expression);
    int result = evaluate_postfix(expression);
    printf("Result: %d\n", result);
    return 0;
}
