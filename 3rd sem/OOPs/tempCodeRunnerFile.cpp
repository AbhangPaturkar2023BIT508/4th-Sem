#include <iostream>

using namespace std;

template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

template <typename U, typename V>
class Pair {
public:
    U first;
    V second;

    Pair(U f, V s) : first(f), second(s) {}

    void display() {
        cout << "(" << first << ", " << second << ")" << endl;
    }
};

int main() {
    int num1 = 5, num2 = 10;
    cout << "Before swap: " << num1 << ", " << num2 << endl;
    swapValues(num1, num2);
    cout << "After swap: " << num1 << ", " << num2 << endl;

    Pair<string, double> student("John", 75.5);
    Pair<int, char> coordinates(3, 'A');

    cout << "Student: ";
    student.display();

    cout << "Coordinates: ";
    coordinates.display();

    return 0;
}
