// 11. Implementation of single level inheritance and Multiple Inheritance

#include<iostream>
using namespace std;

class Base1{
    private:
        int a = 1010;
    public:
        void show_a(){
            cout<<"a = "<<a<<endl;
        }
};

class Derived1 : public Base1{
    private:
        int b = 2020;
    public:
        void show_b(){
            cout<<"b = "<<b<<endl;
        }
};

class Base2 {
    private:
        int c = 1111;
    public:
        void show_c(){
            cout<<"c = "<<c<<endl;
        }
};

class NewDerived : public Base1, public Base2{
    private:
        int d = 2222;
    public:
        void show_d(){
            cout<<"d = "<<d<<endl;
        }
};

main(){
    cout<<"Single Level Inheritance"<<endl;
    Derived1 d1;
    d1.show_a();
    d1.show_b();
    
    cout<<"Multiple Inheritance"<<endl;
    NewDerived nd;
    nd.show_a();
    nd.show_c();
    nd.show_d();
}