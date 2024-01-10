// Write a C program to merge two array in Ascending order.

#include<stdio.h>

void setData(int arrSize, int arr[])
{
    for(int i = 0; i < arrSize; i++)
    {
        printf("Enter number for Arr[%d] : ", i);
        scanf("%d", &arr[i]);
    }
}
int main()
{
    system("cls");
    int size1, size2, temp;

    printf("\nEnter size for ARRAR-1 : ");
    scanf("%d",&size1);
    int arr1[size1];
    setData(size1, arr1);

    printf("\nEnter size for ARRAR-2 : ");
    scanf("%d",&size2);
    int arr2[size2];
    setData(size2, arr2);
    system("cls");

    printf("ARRAY-1 : ");
    for(int i = 0; i < size1; i++)
    {
        printf("%d ", arr1[i]);
    }

    printf("\nARRAY-2 : ");
    for(int i = 0; i < size2; i++)
    {
        printf("%d ", arr2[i]);
    }

    int arrSize = size1 + size2;
    int arr[arrSize];

    for(int i = 0; i < size1; i++)
    {
        arr[i] = arr1[i];
    }
    
    for(int i = 0, j = size1; i < size2, j < arrSize; i++, j++)
    {
        arr[j] = arr2[i];
    }

    for(int i = 0; i < (arrSize - 2); i++)
    {
        for(int j = 0; j < (arrSize - i); j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\n\nMerged & Sorted Array : ");
    for(int i = 0; i < arrSize; i++)
    {
        printf("%d ", arr[i]);
    }
}