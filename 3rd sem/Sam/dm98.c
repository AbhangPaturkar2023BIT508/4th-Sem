#include<stdio.h>
#include<math.h>
void evaluate()
{ int count =0 ;
while(count<9){
int c,a,b,c,area;
  printf("Choose the polygon\n");
  printf("1.triangle 2.square 3.rectangle 4.pentagon 5.hexagon 6.heptagon 7.octagon 8.trapezium 9.exit\n");
  scanf("%d",&c);
  switch(c)
  {
  case 1:
   tri();
  break;
  case 2:
  printf("Enter side length of a square\n");
  scanf("%d",&a);
  area=a*a;
  printf("area : %d\n",area);
  break;
  case 3:
  printf("enter length and breadth of a square\n");
  scanf("%d %d",&a,&b);
  area=a*b;
  printf("area: %d\n",area);
  break;
  case 4:
  printf("Enter length of side of regular pentagon\n");
  scanf("%d",&a);
  area= (5*a*a)/2;
  printf("area of pentagon %d\n",area);
  break;
  case 5:
  printf("Enter side length of regular hexagon\n");
  scanf("%d",&a);
  area= (sqrt(3)*a*3)/2;
  printf("area of regular hexagon %d:\n",area);
  break;
  case 6:
   printf("Enter side length of regular heptagon\n");
   scanf("%d",&a);
   area= 3.364*pow(a,2);
   printf("area of heptagon %d\n",area);
   break;
   case 7:
   printf("Enter side length of regular octagon\n");
     scanf("%d",&a);
     area= 2*pow(a,2)*(a+sqrt(2));
     printf("area of octagon %d\n",area);
     break;
  case 8:
  printf("Enter length of two sides  and height  of trapezium\n");
  scanf("%d %d %d",&a,&b,&c);
  area=((a+b)/2)*c;
  printf("area of trapezium %d\n",area);
  case 9:
  exit(0);
  
  default:
     printf("invalid expression\n");
     break;
     
   
   
  }
 count++;
 }}
  
  tri()
  {int x,area,a,b;
  printf("choose the triangle\n");
  printf("1.equilateral triangle 2.isosceles triangle 3.scalene triangle\n");
  scanf("%d",&x);
  switch(x):
  {
  case 1:
  printf("Enter base and height of triangle\n");
  scnaf("%d %d",&a,&b);
  area=(a*b)/2;
  printf("area :%d\n",area);
  break;
   case 2:
  printf("Enter base and height of triangle\n");
  scnaf("%d %d",&a,&b);
  area=(a*b)/2;
  printf("area :%d\n",area);
  break;
   case 3:
  printf("Enter base and height of triangle\n");
  scnaf("%d %d",&a,&b);
  area=(a*b)/2;
  printf("area :%d\n",area);
  break;
 }
 }
  
  



int main()
{
    Evaluate();
}
