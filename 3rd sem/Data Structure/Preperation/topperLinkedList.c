#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct STUDENT{
    char stud_name[50];
    int submark[3];
    int total;
    struct STUDENT *next;
};

struct STUDENT *head = NULL;

void subject_topper(struct STUDENT *head, int x){
    int maxMark = 0;
    struct STUDENT *ptr = NULL;

    while(head != NULL){
        int submark = head->submark[x];
        if(maxMark < submark)
        {
            maxMark =submark;
            ptr = head;
        }
        head = head->next;
    }

    if(x == 0){
        printf("The topper in Sub[0] = %c", ptr->stud_name);
    }else if(x == 1){
        printf("The topper in Sub[1] = %c", ptr->stud_name);
    }else if(x == 2){
        printf("The topper in Sub[2] = %c", ptr->stud_name);
    }
}

int main(){
    struct STUDENT *s1, *s2, *s3;
    s1 = (struct STUDENT * )malloc(sizeof(struct STUDENT));
    strcpy(s1->stud_name, "abhang");
    s1->submark[0] = 85;
    s1->submark[1] = 80;
    s1->submark[2] = 75;
    s1->total = s1->submark[0] + s1->submark[1] + s1->submark[2];
    printf("%c",s1->stud_name);
    printf("%d",s1->submark[0]);
    printf("%d",s1->submark[1]);
    printf("%d",s1->submark[2]);
    printf("%d",s1->total);
    
    s2 = (struct STUDENT * )malloc(sizeof(struct STUDENT));
    strcpy(s2->stud_name, "sam");
    s2->submark[0] = 81;
    s2->submark[1] = 82;
    s2->submark[2] = 73;
    s2->total = s2->submark[0] + s2->submark[1] + s2->submark[2];
    
    s3 = (struct STUDENT * )malloc(sizeof(struct STUDENT));
    strcpy(s3->stud_name, "mannu");
    s3->submark[0] = 78;
    s3->submark[1] = 74;
    s3->submark[2] = 75;
    s3->total = s3->submark[0] + s3->submark[1] + s3->submark[2];

    s1->next = s2;
    s2->next = s3;
    s3->next = NULL;

    subject_topper(head, 0);
    subject_topper(head, 1);
    subject_topper(head, 2);
}