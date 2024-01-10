// Stack using Linked List
#include<stdio.h>
#include<stdlib.h>

struct node{
    int DATA;
    struct node *NEXT;
};

struct node *TOP = NULL;

void push()
{
    int ITEM;
    struct node *new_node = (struct node*)malloc(sizeof(struct node));
    printf("Enter item to Push : ");
    scanf("%d", &ITEM);
    new_node->DATA = ITEM;
    new_node->NEXT = NULL;

    if(TOP == NULL)
    {
        TOP = new_node;
    }
    else
    {
        new_node->NEXT = TOP;
        TOP = new_node;
    }

    printf("Item Pushed Successfully...");
}

int pop()
{
    int ITEM;
    struct node *ptr;
    if(TOP == NULL)
    {
        printf("Underflow...");
        return (0);
    }
    else
    {
        ptr = TOP;
        ITEM = TOP->DATA;
        TOP = TOP->NEXT;
        printf("Item Poped Successfully...\n");
        free(ptr);
        return(ITEM);
    }
}

void display()
{
    struct node *ptr = TOP;
    if(ptr == NULL)
    {
        printf("Underflow...");
    }
    else
    {
        while(ptr != NULL)
        {
            printf("%d\n", ptr->DATA);
            ptr = ptr->NEXT;
        }
    }
}

int main()
{
    int ITEM, choice;
    char ch;

    do
    {
        printf("\n--- QUEUE OPERATION ---\n");
        printf("1. PUSH \n");
        printf("2. POP \n");
        printf("3. DISPLAY \n");
        printf("4. Exit\n");
    
        printf("Enter Your Choice : ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                push();
                break;

            case 2:
                ITEM = pop();
                printf("Item : %d", ITEM);
                break;

            case 3:
                display();
                break;
            
            case 4:
                break;
            
            default:
                printf("Invalid Input...");
        }
        printf("\nDo you want to repeat operation (Y | N): ");
        scanf(" %c", &ch);
        
    } while(ch == 'y' || ch == 'Y');

    return 0;
}