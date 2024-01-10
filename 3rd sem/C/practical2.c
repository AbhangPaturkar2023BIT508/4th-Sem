//write the c program to print and count Even and Odd elements in an array
#include<stdio.h>

void isOddorEven(int arr2[],int num)
{
    int isEven = 0;
    int isOdd  = 0;
    // printf("----------------------------------------------------------------\n");
    for(int i=0;i<num;i++)
    {
        if(arr2[i]%2 == 0)
        {
            printf("The Given Number is Even\n",arr2[i]);
            isEven++;
        }
        else
        {
            printf("The Given Number is Odd\n",arr2[i]);
            isOdd++;
        }
    }
    //count of even and odd numbers 
    // printf("------------------------------------------------------------------\n");
    printf("Total Number of Even numbers : %d\n",isEven);
    printf("Total Number of Odd numbers : %d\n",isOdd);
    // printf("------------------------------------------------------------------\n");
}
int main()
{
    int num;
    // printf("\t\t\tEven or Odd\n");
    printf("Enter the number of elements you want to enter : ");
    scanf("%d",&num);
    float arr[num];
    int arr2[num];
    int flag = 0;
    //To get user input in float and type cast to int
    for(int i=0;i<num;i++)
    {
        printf("Enter Number : ");
        scanf("%f",&arr[i]);  
        float temp = arr[i]*100;
        arr2[i] = temp;
    }
    isOddorEven(arr2,num);
    return 0; 
}