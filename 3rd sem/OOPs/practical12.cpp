#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

using OperationFunction = int (*)(int, int);

int performOperation(int a, int b, OperationFunction operation) {
    return operation(a, b);
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    OperationFunction operation;

    char choice;
    cout << "Choose operation (+ for addition, * for multiplication): ";
    cin >> choice;

    if (choice == '+') {
        operation = add;
    } else if (choice == '*') {
        operation = multiply;
    } else {
        std::cout << "Invalid choice\n";
        return 1; 
    }

    int result = performOperation(num1, num2, operation);

    cout << "Result: " << result <<endl;

    return 0;
}

