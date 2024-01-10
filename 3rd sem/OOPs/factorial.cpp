#include<iostream>
using namespace std;

int main()
{
    int f = 1, num;

    cout<<"Enter a Number : ";
    cin>>num;

    for(int i = 1; i <= num; i++)
    {
        f = f * i;
    }

    cout<<"Factorial of "<<num<<" is "<<f;
}