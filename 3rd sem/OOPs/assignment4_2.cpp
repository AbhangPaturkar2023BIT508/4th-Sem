// Q4. 2. WAP to perform  math operation ( + - * / ) using Inline function 

#include<iostream>
using namespace std;
inline int add(int a,int b)
{
  return a+b;
}
inline int subtract(int a,int b)
{
  return a-b;
}
inline int multiply(int a,int b)
{
  return a*b;
}
inline int quotient(int a,int b)
{
  return a/b;
}
int main()
{
  int num1,num2;
  cout<<"\nENTER TWO NUMBERS : ";
  cin>>num1>>num2;
  cout<<"\nADDITION : "<<add(num1,num2);
  cout<<"\nSUBTRACTION : "<<subtract(num1,num2);
  cout<<"\nMULTIPLICATION "<<multiply(num1, num2);
  cout<<"\nQUOTIENT "<<quotient(num1, num2);
  return 0;
}