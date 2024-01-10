#include<stdio.h>
#include<stdlib.h>

struct node{
    int DATA;
    struct node *NEXT;
};

int main(){
    struct node *a, *b, *c, *d, *head, *ptr;

    a = (struct node *)malloc(sizeof(struct node));
    b = (struct node *)malloc(sizeof(struct node));
    c = (struct node *)malloc(sizeof(struct node));
    d = (struct node *)malloc(sizeof(struct node));
    head = a;

    a->DATA = 11;
    b->DATA = 22;
    c->DATA = 33;
    d->DATA = 44;

    a->NEXT = b;
    b->NEXT = c;
    c->NEXT = d;
    d->NEXT = NULL;

    ptr = head;
    for(int i = 1; i <= 4; i++){
        printf("| %d |   ",ptr->DATA);
        ptr = ptr->NEXT;
    }

    while(head != NULL){
        ptr = head;
        head = head ->NEXT;
        free(ptr);
    }  
  
}