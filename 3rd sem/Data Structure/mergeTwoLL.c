// Merge two linked list without function
#include<stdio.h>
#include<stdlib.h>

struct node{
    int DATA;
    struct node *NEXT;
};

int main(){
    struct node *a1, *a2, *b1, *b2, *c1, *c2, *d1, *d2, *head1, *head2, *ptr;

    a1 = (struct node *)malloc(sizeof(struct node));
    b1 = (struct node *)malloc(sizeof(struct node));
    c1 = (struct node *)malloc(sizeof(struct node));
    d1 = (struct node *)malloc(sizeof(struct node));
    head1 = a1;

    a1->DATA = 11;
    b1->DATA = 22;
    c1->DATA = 33;
    d1->DATA = 44;

    a1->NEXT = b1;
    b1->NEXT = c1;
    c1->NEXT = d1;
    d1->NEXT = NULL;

    ptr = head1;
    while(ptr != NULL){
        printf("| %d |  ",ptr->DATA);
        ptr = ptr->NEXT;
    }
    printf("\n\n");

    a2 = (struct node *)malloc(sizeof(struct node));
    b2 = (struct node *)malloc(sizeof(struct node));
    c2 = (struct node *)malloc(sizeof(struct node));
    d2 = (struct node *)malloc(sizeof(struct node));
    head2 = a2;

    a2->DATA = 10;
    b2->DATA = 20;
    c2->DATA = 30;
    d2->DATA = 40;

    a2->NEXT = b2;
    b2->NEXT = c2;
    c2->NEXT = d2;
    d2->NEXT = NULL;

   ptr = head2;
    while(ptr != NULL){
        printf("| %d |  ",ptr->DATA);
        ptr = ptr->NEXT;
    }

    printf("\n\n");

    ptr = head1;
    while(ptr->NEXT != NULL){
        ptr = ptr->NEXT;
    }
    ptr->NEXT = head2;

    ptr = head1;
    while(ptr != NULL){
        printf("| %d |  ",ptr->DATA);
        ptr = ptr->NEXT;
    }
  
}