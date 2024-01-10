// Q4. 1. WAP to  find the sum of all elements in an array using recursion

#include <iostream>
using namespace std;

int findArraySum(int arr[], int n) {
    if (n <= 0) {
        return 0;
    } else {
        return arr[n - 1] + findArraySum(arr, n - 1);
    }
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = findArraySum(arr, n);

    cout << "The sum of all elements in the array is: " << sum << endl;

    return 0;
}
