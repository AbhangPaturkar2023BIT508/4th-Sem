#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STACK_SIZE 100

typedef struct {
  int operand;
  char operator;
} Stack;

Stack stack[MAX_STACK_SIZE];
int top = -1;

int isEmpty() {
  return top == -1;
}

int isFull() {
  return top == MAX_STACK_SIZE - 1;
}

void push(int operand) {
  if (isFull()) {
    printf("Stack full!");
    return;
  } else {
    top++;
    stack[top].operand = operand;
  }
}

int pop() {
  if (isEmpty()) {
    printf("Stack empty!");
    return -1;
  } else {
    int operand = stack[top].operand;
    top--;
    return operand;
  }
}

int evaluatePostfix(char postfix[]) {
  int i = 0;
  while (postfix[i] != '\0') {
    if (postfix[i] >= '0' && postfix[i] <= '9') {
      push(postfix[i] - '0');
    } else {
      int operand2 = pop();
      int operand1 = pop();
      switch (postfix[i]) {
        case '+':
          push(operand1 + operand2);
          break;
        case '-':
          push(operand1 - operand2);
          break;
        case '*':
          push(operand1 * operand2);
          break;
        case '/':
          push(operand1 / operand2);
          break;
      }
    }
    i++;
  }
  return pop();
}

int main() {
  char postfix[100];

  printf("Enter a postfix expression: ");
  scanf("%s", postfix);

  int result = evaluatePostfix(postfix);

  printf("The result is: %d\n", result);

  return 0;
}
