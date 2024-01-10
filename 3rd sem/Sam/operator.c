#include<stdio.h>
void operator();
void and ();
void or();
void xor();
void left_shift();
void right_shift();
int main()
{
operator();

return 0;
}


void operator()
{
 int p;
         printf("Enter Which operator you wan to perform");
         printf("1: ^ XOR operator\n");
         printf("2:  Bitwise AND \n");
         printf("3:|| OR Operator \n");
         printf("4: >> Bitwise Right Shift\n");
         printf("5 :<< Bitwise Left Shift\n");
         
         scanf("%d",&p);
         
         switch(p)
         {
           case 1 :
           xor();
           break;
         
           case 2:
           and();
           break;
           
           case 3:
           or();
           break;
           
           case 4:
           left_shift();
           break;
           
           case 5:
           right_shift();
           break;
           
           default:
           printf("ERROR 404\n");
           break;
           }
           }
           
           
           
           
void and()
{
int a=8;
int b=4;
int c=a&b;
printf("Bitwise AND :%d",c);

}

void or()
{
int a =8;
int b=5;
int c=a|b;
printf("Bitwise OR :%d",c);
}

void xor()
{
 int a=8;
 int b=5;
 int c=a^b;
 printf("Bitwise Xor:%d",c);
 
}

void left_shift()
{

	int  a = 5, b = 9;
	printf("a<<1 = %d\n", (a << 1));

	printf("b<<1 = %d", (b << 1));
    

}

void right_shift()
{

	int  a = 5, b = 9;
	printf("a>>1 = %d\n", (a >> 1));

	printf("b>>1 = %d", (b >> 1));
      

}
