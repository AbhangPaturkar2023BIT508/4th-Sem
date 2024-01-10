/* 
Q8. WAP for class Triangle, Calculate area function, and pass the data using constructor, 
    1. Default Constructor
    2. Parameter Constructor
    3. Copy Constructor
*/

#include <iostream>
using namespace std;

class Triangle {
private:
    double base, height;

public:
    Triangle() {
        base = 5;
        height = 10;
    }

    Triangle(Triangle &t) {
        base = t.base;
        height = t.height;
    }

    Triangle(double b, double h) {
        base = b;
        height = h;
    }

    void calculateArea() {
        double area;
        area = (base * height) / 2;
        cout << "Area of triangle: " << area << endl;
    }
};

int main() {
    double base, height;
    cout << "Enter the base of triangle: ";
    cin >> base;
    cout << "Enter the height of triangle: ";
    cin >> height;

    Triangle t1;
    t1.calculateArea();

    Triangle t2(base, height);
    t2.calculateArea();

    Triangle t3(t2);
    t3.calculateArea();

    return 0;
}
