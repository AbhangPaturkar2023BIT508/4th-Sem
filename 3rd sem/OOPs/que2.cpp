#include<iostream>
using namespace std;

class Base1{

};

class Base2{

};

class Derived1 : public Base1{

};

class Derived2 : public Base1{

};

class NewDerived1 : public virtual Base2, public Derived2{

};

class NewDerived2 : public NewDerived1{

};

main()
{

}