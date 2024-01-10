/*
Q6. Create a class of  calculator and perform following operations
    1. Get values from user a, b
    2. Create class object 
    3. perform Addition, Substract, Multiplication and division 
    4. Apply Switch case to choose operation
    5. Use do while loop for continuous operation
*/

#include <iostream>
using namespace std;

class Calculator {
public:
    double add(double a, double b) {
        return a + b;
    }

    double subtract(double a, double b) {
        return a - b;
    }

    double multiply(double a, double b) {
        return a * b;
    }

    double divide(double a, double b) {
        if (b == 0) {
            cout << "Error: Division by zero is not allowed." << std::endl;
            return 0.0;
        }
        return a / b;
    }
};

int main() {
    Calculator calculator;
    double a, b;
    int choice;

    do {
        cout << "Enter value for 'a': ";
        cin >> a;
        cout << "Enter value for 'b': ";
        cin >> b;

        cout << "Select an operation:" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        double result;

        switch (choice) {
            case 1:
                result = calculator.add(a, b);
                cout << "Result: " << result << endl;
                break;

            case 2:
                result = calculator.subtract(a, b);
                cout << "Result: " << result << endl;
                break;

            case 3:
                result = calculator.multiply(a, b);
                cout << "Result: " << result << endl;
                break;

            case 4:
                result = calculator.divide(a, b);
                if (result != 0.0) {
                    cout << "Result: " << result << endl;
                }
                break;

            case 5:
                cout << "Exiting the program." << endl;
                break;

            default:
                cout << "Invalid choice. Please select a valid operation." << endl;
                break;
        }
    } while (choice != 5);

    return 0;
}
