#include<iostream>
using namespace std;

int main()
{
    int arr[10];
    int arrSize = 10, arrSum = 0;

    cout<<"Enter 10 element for array \n";
    for(int i = 0; i < arrSize; i++)
    {
        cout<<"Enter arr["<<i<< "] : ";
        cin>>arr[i];
    }

    for(int i = 0; i < arrSize; i++)
    {
        arrSum = arrSum + arr[i];
    }

    cout<<"The sum of all the entered element is "<<arrSum;
}