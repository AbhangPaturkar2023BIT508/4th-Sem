/* Q1.  Write a c program to
        1. print factorial of a number.
        2. print sum of digits in array of 10.
        3. Matrix addition of 3X3
*/

#include <stdio.h>

int main()
{
    int choice;
    char ch;
    int f = 1, num;
    int arr[10];
    int arrSize = 10, arrSum = 0;
    int rows, cols;
    int matrix1[100][100], matrix2[100][100], sum[100][100];

    do
    {
        printf("1. Factorial\n2. Array Element Sum\n3. Matrix Addition\n4. Exit\nEnter Your Choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1: // Factorial
            printf("--FACTORIAL--\n");
            printf("Enter a Number : ");
            scanf("%d", &num);

            for (int i = 1; i <= num; i++)
            {
                f = f * i;
            }

            printf("Factorial of %d is %d", num, f);
            break;

        case 2: // Array Element Sum
            printf("--ARRAY ELEMENT SUM--\n");
            printf("Enter 10 elements for the array \n");
            for (int i = 0; i < arrSize; i++)
            {
                printf("Enter arr[%d] : ", i);
                scanf("%d", &arr[i]);
            }

            for (int i = 0; i < arrSize; i++)
            {
                arrSum = arrSum + arr[i];
            }

            printf("The sum of all the entered elements is %d", arrSum);
            break;

        case 3: // Matrix Addition
            printf("--MATRIX ADDITION--\n");
            printf("Enter the number of rows: ");
            scanf("%d", &rows);
            printf("Enter the number of columns: ");
            scanf("%d", &cols);

            printf("Enter elements of the first matrix:\n");
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++)
                {
                    printf("Enter element (%d, %d): ", i + 1, j + 1);
                    scanf("%d", &matrix1[i][j]);
                }
            }

            printf("Enter elements of the second matrix:\n");
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++)
                {
                    printf("Enter element (%d, %d): ", i + 1, j + 1);
                    scanf("%d", &matrix2[i][j]);
                }
            }

            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++)
                {
                    sum[i][j] = matrix1[i][j] + matrix2[i][j];
                }
            }

            printf("Sum of the matrices:\n");
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++)
                {
                    printf("%d ", sum[i][j]);
                }
                printf("\n");
            }
            break;

        case 4: // Exit
            break;

        default: // Default
            printf("Invalid Choice...!");
        }
        printf("\nDo you want to repeat (Y | N) : ");
        scanf(" %c", &ch);

    } while (ch == 'Y' || ch == 'y');

    return 0;
}
