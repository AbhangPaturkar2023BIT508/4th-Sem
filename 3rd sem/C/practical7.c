// WAP to perform operation using pointer
#include<stdio.h>

int main()
{
    int a = 30;
    int b = 40;

    int *ptr1 = &a;
    int *ptr2 = &b;

    printf("sum of pointer value = %d\n",*ptr1 + *ptr2);

    printf("subtraction of pointer value = %d\n",*ptr1 - *ptr2);

    printf("multiplication of pointer value = %d\n",*ptr1 * *ptr2);

    printf("division of pointer value = %d\n",*ptr1 / *ptr2);
    return 0;
}