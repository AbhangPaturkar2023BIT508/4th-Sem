#include <stdio.h>
#include <stdlib.h>

// Define a struct for student information
struct Student {
    int roll_number;
    char name[50];
    int subject_marks[3];
    int sum;
    float average;
};

// Define a struct for the stack
struct StudentStack {
    struct Student data[100]; // Assuming a maximum of 100 students in the stack
    int top;
};

// Initialize the stack
void initializeStack(struct StudentStack *stack) {
    stack->top = -1;
}

// Push a student onto the stack and calculate sum and average
void push(struct StudentStack *stack, struct Student student) {
    stack->top++;
    stack->data[stack->top] = student;

    // Calculate sum and average
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += student.subject_marks[i];
    }
    stack->data[stack->top].sum = sum;
    stack->data[stack->top].average = (float)sum / 3;
}

// Pop a student from the stack and print the sum and average of the last but one student
struct Student pop(struct StudentStack *stack) {
    if (stack->top < 1) {
        printf("Not enough students to calculate the sum and average.\n");
        struct Student emptyStudent = {0, "", {0, 0, 0}, 0, 0};
        return emptyStudent;
    }

    struct Student lastButOneStudent = stack->data[stack->top - 1];
    printf("Sum of last but one student: %s\n", lastButOneStudent.name);
    printf("Sum of last but one student: %d\n", lastButOneStudent.sum);
    printf("Average of last but one student: %.2f\n", lastButOneStudent.average);

    stack->top--;
    return stack->data[stack->top];
}

int main() {
    struct Student student1 = {1, "Alice", {85, 90, 92}, 0, 0};
    struct Student student2 = {2, "Bob", {78, 88, 75}, 0, 0};
    struct Student student3 = {3, "Charlie", {92, 95, 89}, 0, 0};

    struct StudentStack studentStack;
    initializeStack(&studentStack);

    push(&studentStack, student1);
    push(&studentStack, student2);
    push(&studentStack, student3);

    // When popping an element, it will print the sum and average of the last but one student
    pop(&studentStack); // Output should be the sum and average of "Bob"

    return 0;
}
