#include <stdio.h>
void AND(int a[], int b[])
{
    printf("truth table for AND operation:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d AND %d =%d\n", a[i], b[j], a[i] & b[j]);
        }
    }
}
void OR(int a[], int b[])
{
    printf("truth table for OR operation:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d OR %d =%d\n", a[i], b[j], a[i] | b[j]);
        }
    }
}

void XNOR(int a[], int b[])
{
    printf("truth table for XNOR operation:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            int min;
            if (a[i] != b[j])
            {
                min = (a[i] > b[j]) ? b[j] : a[i];
                printf("%d XNOR %d =%d\n", a[i], b[j], min);
            }
            else
            {
                printf("%d XNOR %d =%d\n", a[i], b[j], 1);
            }
        }
    }
}

void NOT(int a[])
{
    printf("truth table for NOT operation:\n");
    for (int i = 0; i < 2; i++)
    {
        if (a[i] == 0)
        {
            printf("%d NOT =%d\n", a[i], 1);
        }
        else
        {
            printf("%d NOT =%d\n", a[i], 0);
        }
    }
}

void NAND(int a[], int b[])
{
    printf("truth table for NAND operation:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (a[i] == 1 && b[j] == 1)
            {
                printf("%d NAND %d =%d\n", a[i], b[j], 0);
            }
            else
            {
                printf("%d NAND %d =%d\n", a[i], b[j], 1);
            }
        }
    }
}
void XOR(int a[], int b[])
{
    printf("truth table for XOR operation:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d XOR %d =%d\n", a[i], b[j], a[i] ^ b[j]);
        }
    }
}

void NOR(int a[], int b[])
{
    printf("truth table for NOR operation:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (a[i] == 0 && b[j] == 0)
            {
                printf("%d NOR %d =%d\n", a[i], b[j], 1);
            }
            else
            {
                printf("%d NOR %d =%d\n", a[i], b[j], 0);
            }
        }
    }
}

int main()
{
    int c = 0;
    do
    {
        int num;
        int a[] = {0, 1};
        int b[] = {0, 1};
        printf("enter operation you want to perform:\n1)AND\n2)OR\n3)XNOR\n4)NOT\n5)NAND\n6)XOR\n7)NOR:\n");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            AND(a, b);
            break;
        case 2:
            OR(a, b);
            break;
        case 3:
            XNOR(a, b);
            break;
        case 4:
            NOT(a);
            break;
        case 5:
            NAND(a, b);
            break;
        case 6:
            XOR(a, b);
            break;
        case 7:
            NOR(a,b);
            break;
        default:
            break;
        }
        printf("if you want to perform another peration (enter 1):");
        scanf("%d", &c);
        printf("\n");
    } while (c!=0);
    }
