//Stack using array
#include<stdio.h>
#define MAXSIZE 5
int STACK[MAXSIZE], ITEM, choice, TOP = -1;

void push(){
    if(TOP == (MAXSIZE-1))
    {
        printf("\nSTACK OVERFLOW...\n");
    }
    else
    {
        printf("Enter element for push : ");
        scanf("%d", &ITEM);
        TOP += 1;
        STACK[TOP] = ITEM;
        printf("\nItem Pushed Successfully...\n");
        // display();
    }
}

int pop(){
    if(TOP < 0)
    {
        printf("\nSTACK UNDERFLOW...\n");
    }
    else
    {
        ITEM = STACK[TOP];
        TOP -= 1;
        return ITEM;
    }
    // display();
}

void display(){
    if(TOP < 0)
    {
        printf("\nSTACK UNDERFLOW...\n");
    }
    else
    {
        for(int i = TOP; i >= 0; i--)
        {
            if(TOP == i)
            {
                printf("%d ---> TOP\n", STACK[i]);
            }
            else
            {
                printf("%d \n", STACK[i]);
            }
        }
    }
}

int main(){
    
    char ch;

    do
    {
        printf("\n--- STACK OPERATION ---\n");
        printf("1.  PUSH ELEMENT\n");
        printf("2.  POP ELEMENT\n");
        printf("3.  DISPLAY STACK\n");
        printf("4.  EXIT\n");
        printf("Enter Your Choice : ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: 
                // PUSH
                push();
                break;
            
            case 2:
                // POP
                ITEM = pop();
                printf("ITEM poped : %d\n", ITEM);
                break;
            
            case 3:
                // DISPLAY STACK
                display();
                break;
            
            case 4:
                break;
            
            default:
                printf("\nInvalid Input...\n");

        }
        printf("Do you want to repeat operation (Y | N): ");
        scanf(" %c", &ch);
        
    } while(ch == 'y' || ch == 'Y');
    
}