// WAP to perform Transpose of matrics

#include <stdio.h>

int main()
{
    int arr[3][3];
    printf("Enter 3*3 matrix 9 elements = ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d \t", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");

    printf("Transpose of matrix = \n\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d \t", arr[j][i]);
        }
        printf("\n");
    }

    return 0;
}
