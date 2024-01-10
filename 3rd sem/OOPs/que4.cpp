// Write C++ Program to Print Numbers from 1 to n using class

#include<iostream>
using namespace std;

class PrintNumber{
    private:
        int N;

    public:
        PrintNumber(int n);
        void display();
};

PrintNumber :: PrintNumber(int n){
    N = n;
}

void PrintNumber :: display(){
    for(int i = 1; i <= N; i++){
        cout<<i<<" ";
    }
}

int main()
{
    PrintNumber p1(10);
    p1.display();
}