#include <stdio.h>

#define MAX_SIZE 10

int stack[MAX_SIZE];
int top = -1;

void push(int value) {
    if (top < MAX_SIZE - 1) {
        stack[++top] = value;
    } else {
        printf("Stack overflow\n");
    }
}

int pop() {
    if (top >= 0) {
        return stack[top--];
    } else {
        printf("Stack underflow\n");
        return -1;  // Return a sentinel value to indicate an error
    }
}

int main() {
    int elements[] = {12, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int searchItem = 20;
    int sum = 0;

    // Pushing elements onto the stack
    for (int i = 0; i < sizeof(elements) / sizeof(elements[0]); ++i) {
        push(elements[i]);
    }

    // Searching for the item and calculating the sum
    while (top >= 0) {
        int popped = pop();

        sum += popped;
        printf("Pop: %d\nSum: %d\n", popped, sum);
        
        if (popped == searchItem) {
            printf("Item %d found in the stack.\n", searchItem);
            break;
        }

    }

    // If the item is not found
    if (top < 0) {
        printf("Item %d not found in the stack.\n", searchItem);
    }

    return 0;
}
