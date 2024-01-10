// linear queue using array
#include<stdio.h>
int  choice, ITEM, FRONT = -1, REAR = -1;
char ch;

void enqueue(int queue[],int size)
{
    if(REAR == (size - 1))
    {
        printf("Overflow...");
    }
    else
    {
        printf("Enter Item to Enqueue : ");
        scanf("%d", &ITEM);

        if(FRONT == -1 && REAR == -1)
        {
            FRONT += 1;
            REAR += 1;
        }
        else
        {
            REAR += 1;
        }

        queue[REAR] = ITEM;
        printf("Item Enqueue Successfully...");
    }
}

void dequeue(int queue[])
{
    if(REAR == -1)
    {
        printf("Underflow...");
    }
    else
    {
        ITEM = queue[FRONT];
        printf("Item Dnqueue Successfully...");
        printf("\nItem : %d", ITEM);

        if(FRONT == REAR)
        {
            FRONT = -1;
            REAR = -1;
        }
        else
        {
            FRONT += 1;
        }
    }
}

void traverse(int queue[])
{
    if(REAR == - 1)
    {
        printf("Underflow...");
    }
    else
    {
        printf("QUEUE : ");
        for(int i = FRONT; i <= REAR; i++)
        {
            printf("%d ", queue[i]);
        }
    }
}

int main()
{
    int size;
    printf("Enter Size of Queue : ");
    scanf("%d", &size);
    int QUEUE[size];
    
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
                enqueue(QUEUE,size);
                break;

            case 2:
                dequeue(QUEUE);
                break;

            case 3:
                traverse(QUEUE);
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