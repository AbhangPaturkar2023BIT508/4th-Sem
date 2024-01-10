#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include <string.h>

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


int evaluateReversePrefixExpression(const char* expression) {
    int i = 0;
    while (expression[i] != '\0') {
        if (isdigit(expression[i])) {
            push(expression[i] - '0');
        } else if (isOperator(expression[i])) {
            int operand1 = pop();
            int operand2 = pop();
            int result;

            switch (expression[i]) {
                case '+': result = operand1 + operand2; break;
                case '-': result = operand1 - operand2; break;
                case '*': result = operand1 * operand2; break;
                case '/':
                    if (operand2 != 0) {
                        result = operand1 / operand2;
                    } else {
                        printf("Error: Division by zero\n");
                        exit(EXIT_FAILURE);
                    }
                    break;
                default:
                    printf("Error: Invalid operator\n");
                    exit(EXIT_FAILURE);
            }

            push(result);
        }
        i++;
    }

    if (top == 0 && expression[i] == '\0') {
        return stack[top];
    } else {
        printf("Error: Invalid reverse prefix expression\n");
        exit(EXIT_FAILURE);
    }
}

int main() {
    const char* reversePrefixExpression = "$ * + 6 9 - 3 1";
    int len = strlen(reversePrefixExpression);

    // Create a reversed copy of the expression
    char reversedExpression[MAX_SIZE];
    for (int i = len - 1, j = 0; i >= 0; i--, j++) {
        reversedExpression[j] = reversePrefixExpression[i];
    }
    reversedExpression[len] = '\0';

    int result = evaluateReversePrefixExpression(reversedExpression);
    printf("Result: %d\n", result);

    return 0;
}
