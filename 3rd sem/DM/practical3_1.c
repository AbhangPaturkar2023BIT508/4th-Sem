// Write the C program to execute following statements.
// - Dynamic Array sum

#include <stdio.h>
void sum(int arr[], int s)
{
    int total = 0;
    for (int i = 0; i < s; i++)
    {
        total = total + *(arr);
        ++arr;
    }
    printf("Addition of Array : %d\n", total);
}

void getElement(int s, int arr[])
{
    printf("Enter %d elements of an array : ", s);

    for (int i = 0; i < s; i++)
    {
        scanf("%d", &arr[i]);
    }
}

int main()
{
    int size;
    printf("Enter the size of an Array : ");
    scanf("%d", &size);
    int array[size];

    getElement(size, array);

    sum(&array[0], size);

    return 0;
}
