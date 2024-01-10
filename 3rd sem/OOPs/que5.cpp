/* Write a program in c++ by Overloading Binary
Operator + for addition of time 10:20:10 + 06:10:40 of
a Class Time with attributes Hours, Minutes, Seconds?
In eg. 10:20:10, 06:10:40 is Hours, Minutes, and
Seconds, : is for display purpose.*/

#include<iostream>
using namespace std;

class Time{
    private:
        int Hours, Minutes, Seconds;

    public:
        void setTime(int h, int m, int s);
        void display();
        Time operator +(Time &t);
};

void Time :: setTime(int h, int m, int s){
    Hours = h;
    Minutes = m;
    Seconds = s;
}

void Time :: display(){
    cout<<Hours<<":"<<Minutes<<":"<<Seconds<<endl;
}

Time Time :: operator +(Time &t){
    Time temp;

    temp.Hours = Hours + t.Hours;
    temp.Minutes = Minutes + t.Minutes;
    temp.Seconds = Seconds + t.Seconds;

    setTime(temp.Hours, temp.Minutes, temp.Seconds);

    return temp;
}

int main(){
    Time t1, t2, t3;
    t1.setTime(10, 20, 10);
    t1.display();
    t2.setTime(06, 10, 40);
    t2.display();
    t3 = t1 + t2;
    t3.display();

}