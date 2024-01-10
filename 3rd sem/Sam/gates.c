#include<stdio.h>
void and();
void or();
void xor();
void nand();
void xnor();
void nor();
void not();
void gates();

int main()
{
gates();
return 0;
}

void gates()
{
int n;


printf("Gates :\n");
printf("1 : AND \n");
printf("2 : OR \n");
printf("3 : XOR \n");
printf("4 : NAND \n");
printf("5 : XNOR \n");
printf("6 : NOR \n");
printf("7 : NOT \n");
printf("8 : Exit\n");


printf("Enter the number to see the Truth Table:");
scanf("%d",&n);


switch(n)
{
case 1:
and();
break;

case 2:
or();
break;

case 3:
xor();
break;

case 4:
nand();
break;

case 5:
xnor();
break;

case 6:
nor();
break;

case 7:
not();
break;

printf("ERROR 404\n");

}}

void and()
{
int a[50]={0,0,1,1};
int b[50]={0,1,0,1};
printf("AND GATE\n");
printf("A\tB\tY\n");

for(int i=1;i<3;i++)
{
for(int j=1;j<3;j++)
{
printf("%d\t%d\t%d\n",a[i] ,b[j],a[i]*b[j]);


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

void xor()
{
  int a[50]={0,0,1,1};
int b[50]={0,1,0,1};
printf("XOR GATE\n");
printf("A\tB\tY\n");

for(int i=1;i<3;i++)
{
for(int j=1;j<3;j++)
{
int c=a[i]+b[j];
if(a[i]==b[j])
{
  c=0;
}
printf("%d\t%d\t%d\n",a[i] ,b[j],c);

}}
}

void nand()
{ 
int a[50]={0,0,1,1};
int b[50]={0,1,0,1};
printf("NAND GATE\n");
printf("A\tB\tY\n");

for(int i=1;i<3;i++)
{
for(int j=1;j<3;j++)
{
int c=a[i]*b[j];

if(a[i]*b[j]==0)
{
c=1;}
else
{
c=0;
}
printf("%d\t%d\t%d\n",a[i] ,b[j],c);


}}

}

void nor()

{ 
int a[50]={0,0,1,1};
int b[50]={0,1,0,1};
printf("NOR GATE\n");
printf("A\tB\tY\n");

for(int i=1;i<3;i++)
{
for(int j=1;j<3;j++)
{
int Y=a[i]&&

if(a[i]+b[j]==0)
{
c=1;}
else
{
c=0;
}
printf("%d\t%d\t%d\n",a[i] ,b[j],c);


}}

}


void xnor()
{
 int a[50]={0,0,1,1};
int b[50]={0,1,0,1};
printf("XNOR GATE\n");
printf("A\tB\tY\n");

for(int i=1;i<3;i++)
{
for(int j=1;j<3;j++)
{
int c;
if(a[i]==b[j])
{
  c=1;
}
else{
c=0;
}
printf("%d\t%d\t%d\n",a[i] ,b[j],c);

}}
}

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
