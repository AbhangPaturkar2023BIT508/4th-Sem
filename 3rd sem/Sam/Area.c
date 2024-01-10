#include<stdio.h>
void traingle();
void iso();
void right();
void equi();
void square();
void rectangle();
void circle();
void hexagon();
void cyclinder();
void cone();
void area();

int main()
{
area();
return 0;
}

void area()
{
int n;


printf("AREA OF SHAPES :\n");
printf("1 : Traingle \n");
printf("2 : Isosceles Traingle \n");
printf("3 : Right Angle Traingle \n");
printf("4 : Equilateral Traingle \n");
printf("5 : Square \n");
printf("6 : Rectangle \n");
printf("7 : Circle \n");
printf("8 : Hexagon\n");
printf("9 : Cyclinder \n");



printf("Enter Which shape you want to Choose:\n");
scanf("%d",&n);


switch(n)
{
case 1:
traingle();
break;

case 2:
iso();
break;

case 3:
right();
break;

case 4:
equi();
break;

case 5:
square();
break;

case 6:
rectangle();
break;  

case 7:
circle();
break;

case 8:
hexagon();
break;

case 9:
cyclinder();
break;



default:
printf("ERROR 404\n");
break;
}}


void traingle()
{
int b,h;
printf("Enter the base and height\n");
scanf("%d%d",&b,&h);

float area= 0.5*b*h;
printf("The Area Of the Traingle is :%.2f\n",area);
}

void iso()
{
int b,h;
printf("Enter the base and height\n");
scanf("%d%d",&b,&h);

float area= 0.5*b*h;
printf("The Area Of the Traingle is :%.2f\n",area);
}

void right()
{
int b,h;
printf("Enter the base and height ");
scanf("%d%d",&b,&h);

float area= 0.5*b*h;
printf("The Area Of the Right Angle Traingle is :%.2f\n",area);
}

void equi()
{
int a;
printf("Enter any side of Equilateral Traingle  ");
scanf("%d",&a);

float area= 0.43301270189*a*a;
printf("The Area Of the Equilateral Traingle is :%.2f",area);
}

void square()
{

int a;
printf("Enter any side of Square \n");
scanf("%d",&a);

float area=a*a;
printf("The Area Of the Square is :%.2f",area);
}


void rectangle()
{

int l,b;
printf("Enter Length And Breadth of Rectangle:\n");
scanf("%d%d",&l,&b);

float area=l*b;
printf("The Area Of the Rectangle is :%.2f\n",area);
}


void circle()
{

int r;
printf("Enter Radius of Circle\n");
scanf("%d",&r);

float area=3.14*r*r;
printf("The Area Of the Circle is :%.2f\n",area);
}

void hexagon()
{
int a;
printf("Enter any side of Hexagon:\n");
scanf("%d",&a);

float area= 10.3923048454*a*a;
printf("The Area Of the Hexagon is :%.2f\n",area);
}

void cyclinder()
{
int r,h;
printf("Enter the Radius and height\n");
scanf("%d%d",&r,&h);

float area= (2*3.14*r*h)+(2*3.14*r*r);
printf("The Area Of the Cyclinder is :%.2f\n",area);
}


