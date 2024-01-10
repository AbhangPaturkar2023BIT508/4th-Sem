#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

void LinkedListTravel(struct node *head)
{
    while(head != NULL)
    {
        printf("NEXT------>%d\t\n",head->data);
        head=head->next;
    }
}

struct node *AddAtFirst(struct node *head,int val)
{
    struct node * ptr= (struct node *)malloc(sizeof(struct node));
    ptr->data = val; 
    ptr->next=head;
    ptr->prev=head->prev;
    head = ptr;
    return head;
}

struct node *addAtEnd(struct node *head,int val)
{
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=val;
    struct node *temp=head;
    while(temp->next != NULL)
    {
        temp=temp->next;
    }
    temp->next=ptr;
    ptr->prev = temp;
    ptr->next = NULL;
    // head = ptr;
    return head;
}
struct node *addInbetween(struct node *head,int index,int val)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *t=head;
    ptr->data=val;
    struct node *n=head->next;
    int i=1;
    while(i !=index-1)
    {
        t=t->next;
        n=n->next;
        i++;
    }
    if(n->next == NULL)
    {
        t->next=ptr;
        ptr->prev=t;
        ptr->next=NULL;
    }
    else
    {
    t->next = ptr;
    n->prev = ptr;
    ptr->prev=t;
    ptr->next = n;
    }
    return head;
}
int main()
{
    struct node *head,*first,*second,*third;
    head = (struct node *)malloc(sizeof(struct node));
    first=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    
    head->prev=NULL;
    head->data=10;
    head->next=first;
    first->data=20;
    second->data=30;
    third->data=40;
    first->next=second;
    first->prev=head;
    second->next=third;
    second->prev=first;
    third->next=NULL;
    third->prev=second;
    LinkedListTravel(head);
    head=AddAtFirst(head,100);
    printf("After insertion at First.......!!!\n");
    LinkedListTravel(head);
    head=addAtEnd(head,200);
    printf("After insertion at End.........!!!\n");
    LinkedListTravel(head);
    head=addInbetween(head,6,500);
    printf("After insertion in Between.....!!!\n");
    LinkedListTravel(head);
}