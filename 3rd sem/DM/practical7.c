/*
 Write the C program for Following:
    ❖ Area of Square
    ❖ Area of Rectangle
    ❖ Area of Triangle
    ❖ Area of Parallelogram
    ❖ Area of Circle
*/

#include <stdio.h>
#define PI 3.14
float area(int a, int b, float c)
{
    return a * b * c;
}
int main()
{
    int choice;
    int a, b, result;
    char ch = 'y';
    do
    {
        printf("Program to Find Area\n");
        printf("1. Area of Square\n");
        printf("2. Area of Rectangle\n");
        printf("3. Area of Triangle\n");
        printf("4. Area of Circle\n");
        printf("5. Area of Parallelogram\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Area of Square\n");
            printf("Enter Side of Square : ");
            scanf("%d", &a);
            b = a;
            printf("Area : %.2f\n\n", area(a, b, 1));
            break;
        case 2:
            printf("Area of Rectangle\n");
            printf("Enter Length and Breadth of Rectangle : ");
            scanf("%d%d", &a, &b);
            printf("Area : %.2f\n\n", area(a, b, 1));
            break;
        case 3:
            printf("Area of Triangle\n");
            printf("Enter base and Hieght of Triangle : ");
            scanf("%d%d", &a, &b);
            printf("Area : %.2f\n\n", area(a, b, 0.5));
            break;
        case 4:
            printf("Area of Circle\n");
            printf("Enter radius of Circle : ");
            scanf("%d", &a);
            b = a;
            printf("Area : %.2f\n\n", area(a, b, PI));
            break;
        case 5:
            printf("Area of Parallelogram\n");
            printf("Enter base and Height of Parallelogram : ");
            scanf("%d%d", &a, &b);
            printf("Area : %.2f\n\n", area(a, b, 1.0));
            break;
        default:
            printf("Invalid Choice...\n");
        }
        printf("Do You want to continue [Y | N]: ");
        scanf(" %c", &ch);
    } while (ch == 'Y' || ch == 'y');
    return 0;
}
