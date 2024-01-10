
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

typedef struct StudentNode {
    char name[50];
    int subjectMarks[3];
    int totalMarks;
    struct StudentNode *next;
} StudentNode;

void SUBJECT_TOPPER(StudentNode *head, int subjectIndex) {
    int maxMarks = 0;
    StudentNode *topper = NULL;

    while (head != NULL) {
        int subjectMark = head->subjectMarks[subjectIndex];
        if (subjectMark > maxMarks) {
            maxMarks = subjectMark;
            topper = head;
        }

        head = head->next;
    }

    if (subjectIndex == 0) {
        printf("The topper in Subject 1 is: %s\n", topper->name);
    } else if (subjectIndex == 1) {
        printf("The topper in Subject 2 is: %s\n", topper->name);
    } else {
        printf("The topper in Subject 3 is: %s\n", topper->name);
    }
}

int main() {
    StudentNode *student1 = (StudentNode *) malloc(sizeof(StudentNode));
    strcpy(student1->name, "Alice");
    student1->subjectMarks[0] = 95;
    student1->subjectMarks[1] = 87;
    student1->subjectMarks[2] = 92;
    student1->totalMarks = 274;
    student1->next = NULL;

    StudentNode *student2 = (StudentNode *) malloc(sizeof(StudentNode));
    strcpy(student2->name, "Bob");
    student2->subjectMarks[0] = 88;
    student2->subjectMarks[1] = 91;
    student2->subjectMarks[2] = 85;
    student2->totalMarks = 264;
    student2->next = NULL;

    StudentNode *student3 = (StudentNode *) malloc(sizeof(StudentNode));
    strcpy(student3->name, "Charlie");
    student3->subjectMarks[0] = 93;
    student3->subjectMarks[1] = 90;
    student3->subjectMarks[2] = 94;
    student3->totalMarks = 277;
    student3->next = NULL;

    student1->next = student2;
    student2->next = student3;

    SUBJECT_TOPPER(student1, 0);
    SUBJECT_TOPPER(student1, 1);
    SUBJECT_TOPPER(student1, 2);

    return 0;
}
