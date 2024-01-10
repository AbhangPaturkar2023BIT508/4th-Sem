// Wrtie a C program to check given number is perfect square or not

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    system("cls");
    int num = 0, i;
    float f;
    
    printf("Enter a Number : ");
    scanf("%d", &num);

    f = sqrt((double)num);
    i = f;

    if(i == f)
    {
        printf("%d is perfect square root of %d", num, i);
    }
    else
    {
        printf("%d is not a perfect square root", num);
    }
    
    return 0;
}