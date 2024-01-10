#include<stdio.h>
void and();
void or();
void not();
void equ();
int main()
{
equ();

return 0;
}

equ()
{
//char[];
//printf("Enter the Equation\n");
printf("A and B OR A \n");
com();


}
void and()
{
int a[50]={0,0,1,1};
int b[50]={0,1,0,1};
printf("A\tB\tY\n");

for(int i=1;i<3;i++)
{
for(int j=1;j<3;j++)
{
int c=a[i]*b[j];
printf("%d\t%d\t%d\n",a[i] ,b[j],c);


}}
}

void or()
{
int a[50]={0,0,1,1};
int b[50]={0,1,0,1};
printf("OR GATE\n");
printf("A\tB\tY\n");

for(int i=1;i<3;i++)
{
for(int j=1;j<3;j++)
{
int c=a[i]+b[j];
if(c==2){
c=1;
}

printf("%d\t%d\t%d\n",a[i] ,b[j],c);


}}}

void not()
{
int a[50]={0,1};
printf("NOT GATE\n");
printf("A\tY\n");
for(int i=0;i<2;i++)
{
int c;
if(a[i]==0)
{
  c=1;
  }
  else{
  c=0;}
   
   
   printf("%d\t%d\n",a[i],c);
   }}
   
   void com()
   {
   int a[50]={0,0,1,1};
int b[50]={0,1,0,1};
int i,j;
/*  int p[50]={0,0,1,1};
int q[50]={0,1,0,1};*/
int c=a[i]*b[j];
 int d=a[i]+b[j];
 if(d==2){
d=1;}
 
printf("A\tB\tA.B\tA+B");

for( i=1;i<3;i++)
{
for(j=1;j<3;j++)
{

printf("%d\t%d\t%d\t%d\n",a[i] ,b[j],c,a[i]+b[j]);

}}
printf("\n");
for( i=1;i<3;i++)
{
for( j=1;j<3;j++)
{

printf("%d\t%d\n",a[i]*b[j],a[i]+b[j]);

}}
printf("A and B OR A\n");
for( i=1;i<3;i++)
{
for( j=1;j<3;j++)
{

printf("%d\n",(a[i]*b[j])+(a[i]+b[j]));}}
}

