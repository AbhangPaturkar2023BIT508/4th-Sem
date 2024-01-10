#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_SIZE 50

int stack[MAX_SIZE];
int top = -1;

void push(int value) {
    if (top < MAX_SIZE - 1) {
        stack[++top] = value;
    } else {
        printf("Stack overflow\n");
        exit(EXIT_FAILURE);
    }
}

int pop() {
    if (top >= 0) {
        return stack[top--];
    } else {
        printf("Stack underflow\n");
        exit(EXIT_FAILURE);
    }
}

int isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

int performOperation(int operand1, int operand2, char operator) {
    switch (operator) {
        case '+': return operand1 + operand2;
        case '-': return operand1 - operand2;
        case '*': return operand1 * operand2;
        case '/':
            if (operand2 != 0) {
                return operand1 / operand2;
            } else {
                printf("Error: Division by zero\n");
                exit(EXIT_FAILURE);
            }
        default:
            printf("Error: Invalid operator\n");
            exit(EXIT_FAILURE);
    }
}

int evaluatePostfixExpression(const char* expression) {
    int i = 0;
    while (expression[i] != '\0') {
        if (isdigit(expression[i])) {
            push(expression[i] - '0');
        } else if (isOperator(expression[i])) {
            int operand2 = pop();
            int operand1 = pop();
            int result = performOperation(operand1, operand2, expression[i]);
            push(result);
        }
        i++;
    }

    if (top == 0) {
        return stack[top];
    } else {
        printf("Error: Invalid postfix expression\n");
        exit(EXIT_FAILURE);
    }
}

int main() {
    const char* postfixExpression = "3 2 + 6 - $";
    int result = evaluatePostfixExpression(postfixExpression);
    printf("Result: %d\n", result);

    return 0;
}
