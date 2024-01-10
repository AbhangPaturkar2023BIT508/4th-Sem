#include<stdio.h>
#define MAXSIZE 100
int arr[MAXSIZE], N = 0, ITEM, LOC, INDEX, i;

void displayArray()
{
    printf("Array : ");
    for(i = 0; i < N; i++)
    printf("%d ", arr[i]);
}

int linearSearch(int item)
{
    for(i = 0; i < N; i++)
    {
        if(arr[i] == item)
        {
            return (i);
        }
    }

    return (-1);
}

void insertElement()
{
    printf("\nEnter value to insert and enter index : ");
    scanf("%d%d", &ITEM, &INDEX);

    if(INDEX >= 0 && INDEX <= N)
    {
        for (i = N-1; i >= INDEX; i--)
        {
            arr[i+1] = arr[i];
        }

        arr[i+1] = ITEM;
        printf("Item inserted\n");
        N=N+1;
    }

    displayArray();
}

void deleteElement()
{
    
    printf("Enter item to delete : ");
    scanf("%d", &ITEM);

    INDEX = linearSearch(ITEM);
    
    if(INDEX == -1)
    {
        printf("Cannot Find...\n");
    }
    else
    {
        for(i = INDEX; i < N; i++)
        {
            arr[i] = arr[i+1];
        }
        printf("Element Deleted...");
        displayArray();
    }

}

int main(){
    int N;
    char ch;

    do
    {
        printf("\n--- ARRAY OPERATION ---\n");
        printf("1.  INSERT ELEMENT\n");
        printf("2.  DELETE ELEMENT\n");
        printf("3.  DISPLAY ARRAY\n");
        printf("4.  EXIT\n");
        printf("Enter Your Choice : ");
        scanf("%d", &N);

        switch(N)
        {
            case 1: 
                insertElement();
                break;
            
            case 2:
                deleteElement();
                break;
            
            case 3:
                displayArray();
                break;
            
            default:
                printf("\nInvalid Input...\n");

        }
        printf("\nDo you want to repeat operation (Y | N): ");
        scanf(" %c", &ch);
        
    } while(ch == 'y' || ch == 'Y');
    
}
