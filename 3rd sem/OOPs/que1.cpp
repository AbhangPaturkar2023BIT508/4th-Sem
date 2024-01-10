/* Write a program to print the names of students by
creating a Student class. If no name is passed while
creating an object of the Student class, then the name
should be "Unknown", otherwise the name should be
equal to the String value passed while creating the
object of the Student class */

#include<iostream>
using namespace std;

class Student{
    private:
        string name;

    public:
        Student(string n);
        void display();
};

Student :: Student(string n = "UNKNOWN"){
    name = n;
}

void Student :: display(){
    cout<<"Name : "<<name;
}

int main()
{
    Student s1("aaaa");
    s1.display();

}