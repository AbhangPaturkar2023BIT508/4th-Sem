//Queue using linked list
#include<stdio.h>
#include<stdlib.h>

struct node{
    int DATA;
    struct node *NEXT;
};

struct node *FRONT = NULL;
struct node *REAR = NULL;

void enqueue()
{
    struct node *new_node = (struct node*)malloc(sizeof(struct node));
    int ITEM;
    printf("Enter Item to Enqueue : ");
    scanf("%d", &ITEM);
    new_node->DATA = ITEM;

    if(FRONT == NULL && REAR == NULL)
    {
        FRONT = new_node;
        REAR = new_node;
        REAR->NEXT = NULL;
    }
    else
    {
        REAR->NEXT = new_node;
        REAR = new_node;
        REAR->NEXT = NULL;
    }

    printf("Item Inserted Successfully...");

}

int dequeue()
{
    int ITEM;

    if(FRONT == NULL && REAR == NULL)
    {
        printf("Underflow...");
        return 0;
    }
    {
        struct node *ptr;
        ptr = FRONT;
        FRONT = FRONT->NEXT;
        ITEM = ptr->DATA;
        free(ptr);
        return(ITEM);
    }
}

void traverse()
{
    struct node *ptr = FRONT;
    if(ptr == NULL)
    {
        printf("Underflow...");
    }
    else
    {
        while(ptr != NULL)
        {
            printf("%d ", ptr->DATA);
            ptr = ptr->NEXT;
        }
    }
}


int main()
{
    int choice, ITEM;
    char ch;

    do
    {
        printf("\n--- QUEUE OPERATION ---\n");
        printf("1. ENQUEUE \n");
        printf("2. DEQUEUE \n");
        printf("3. TRAVERSE \n");
    
        printf("Enter Your Choice : ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                enqueue();
                break;

            case 2:
                ITEM = dequeue();
                printf("Item Deleted : %d", ITEM);
                break;

            case 3:
                traverse();
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