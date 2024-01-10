// Write a C program to create simple calculator using functions.

#include<stdio.h>
#include<conio.h>
#include<math.h>
// #include <sstream> 
int num1, num2;

void setData()
{
    printf("\n\t\tEnter First Number : ");
    scanf("%d", &num1);

    printf("\t\tEnter Second Number : ");
    scanf("%d", &num2);
}

void setSingalData()
{
    printf("\n\t\tEnter a Number : ");
    scanf("%d", &num1);
}

int main()
{
    char c;

    do
    {
        system("cls");
        int choice;  
        printf("\n1 ADDITION\t2 SUBSTRACTION\t3 MULTIPLICATION\t4 DIVISION\t5 MODULUS\n6 SQUARE\t7 SQUARE ROOT\t8 LOG\t\t\t9 CUBE\t\t10 CUBE ROOT\n");
        
        printf("\n\t\tEnter Your Choice : ");
        scanf("%d", &choice);
        
        switch(choice)
        {
            case 1 :
                printf("\t\t\t--- ADDITION ---");
                setData();
                printf("\n\t\tADDITION OF %d & %d is %d", num1, num2, (num1 + num2));
                break;

            case 2 :
                printf("\t\t\t--- SUBSTRACTION ---");
                setData();
                printf("\n\t\tSUBSTRACTION OF %d & %d is %d", num1, num2, (num1 - num2));
                break;

            case 3 :
                printf("\t\t\t--- MULTIPLICATION ---");
                setData();
                printf("\n\t\tMULTIPLICATION OF %d & %d is %d", num1, num2, (num1 * num2));
                break;

            case 4 :
                printf("\t\t\t--- DIVISION ---");
                setData();
                printf("\n\t\tQUOTIENT OF %d & %d is %d", num1, num2, (num1 / num2));
                break;

            case 5 :
                printf("\t\t\t--- MODULUS ---");
                setData();
                printf("\n\t\tREMAINDER OF %d & %d is %d", num1, num2, (num1 % num2));
                break;

            case 6 :
                printf("\t\t\t--- SQUARE ---");
                setSingalData();
                printf("\n\t\tSQUARE OF %d is %d", num1, (num1 * num1));
                break;

            case 7 :
                printf("\t\t\t--- SQUARE ROOT ---");
                setSingalData();
                printf("\n\t\tSQUARE ROOT OF %d is %f", num1, sqrt(num1));
                break;

            case 8 :
                printf("\t\t\t--- LOG ---");
                setSingalData();
                printf("\n\t\tLOG OF %d is %f", num1, log(num1));
                break;

            case 9 :
                printf("\t\t\t--- CUBE ---");
                setSingalData();
                printf("\n\t\tCUBE OF %d is %d", num1, (num1 * num1 * num1));
                break;

            case 10 :
                printf("\t\t\t--- CUBE ROOT ---");
                setSingalData();
                printf("\n\t\tCUBE ROOT OF %d is %f", num1, cbrt(num1));
                break;

            default:
                printf("\t\tInvalid Choice...");
        }
      
        printf("\n\nDo you want to repeart Operation ? (Y | N) : ");
        scanf(" %c",&c);
        // printf("%c", c);
    
    } while( c == 'Y' || c == 'y');
    
    return 0;
}
