#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX_LEN 400

// Function to determine precedence of operators
int precedence(char op) {
    if (op == '+' || op == '-') {
        return 1;
    }
    if (op == '*' || op == '/') {
        return 2;
    }
    if (op == '^') {
        return 3;
    }
    return 0;
}

// Function to check if the character is an operand (a letter)
int isOperand(char c) {
    return isalpha(c);  // If the character is an alphabet letter
}

// Function to perform the conversion
void infixToRPN(char* expression, char* result) {
    char stack[MAX_LEN];
    int top = -1;
    int resultIndex = 0;

    // Traverse the infix expression
    for (int i = 0; expression[i] != '\0'; i++) {
        char current = expression[i];

        // If the current character is an operand, add it to the result
        if (isOperand(current)) {
            result[resultIndex++] = current;
        }
        // If the current character is '(', push it to the stack
        else if (current == '(') {
            stack[++top] = current;
        }
        // If the current character is ')', pop until '(' is found
        else if (current == ')') {
            while (top != -1 && stack[top] != '(') {
                result[resultIndex++] = stack[top--];
            }
            top--;  // Pop '(' from the stack
        }
        // If the current character is an operator
        else if (current == '+' || current == '-' || current == '*' || current == '/' || current == '^') {
            // Pop operators from the stack to the result if they have higher or equal precedence
            while (top != -1 && precedence(stack[top]) >= precedence(current)) {
                result[resultIndex++] = stack[top--];
            }
            stack[++top] = current;
        }
    }

    // Pop all remaining operators in the stack
    while (top != -1) {
        result[resultIndex++] = stack[top--];
    }
    
    // Null terminate the result
    result[resultIndex] = '\0';
}

int main() {
    int t;
    scanf("%d", &t);  // Number of test cases

    // Process each test case
    while (t--) {
        char expression[MAX_LEN];
        char result[MAX_LEN];

        // Read the expression
        scanf("%s", expression);

        // Convert to RPN using the infix to postfix function
        infixToRPN(expression, result);

        // Print the RPN result
        printf("%s\n", result);
    }

    return 0;
}