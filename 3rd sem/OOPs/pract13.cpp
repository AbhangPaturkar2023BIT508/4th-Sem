#include <iostream>
#include <stdexcept>

using namespace std;

int safeDivide(int numerator, int denominator) {
    if (denominator == 0) {
        throw runtime_error("Divide by zero exception");
    }
    return numerator / denominator;
}

int safeArrayAccess(int* arr, int index, int size) {
    if (index < 0 || index >= size) {
        throw out_of_range("Array index out of bounds exception");
    }
    return arr[index];
}

int main() {
    try {
        int num1, num2;
        cout << "Enter two numbers for division: ";
        cin >> num1 >> num2;

        int result = safeDivide(num1, num2);
        cout << "Result of division: " << result << endl;

        int arr[] = {1, 2, 3, 4, 5};
        int arrSize = sizeof(arr) / sizeof(arr[0]);
        int index;
        cout << "Enter an index to access in the array: ";
        cin >> index;

        int value = safeArrayAccess(arr, index, arrSize);
        cout << "Value at index " << index << ": " << value << endl;
    } catch (const exception& e) {
        cerr << "Exception caught: " << e.what() << endl;
    }

    return 0;
}
