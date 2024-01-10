// Q2. WAP same given in assistant 1 in c++

#include <iostream>
using namespace std;

int main() {
    int choice;
    char ch;
    int f = 1, num;
    int arr[10];
    int arrSize = 10, arrSum = 0;
    int rows, cols;
    int matrix1[100][100], matrix2[100][100], sum[100][100];

    do
    {
        cout<<"1. Factorial\n2. Array Element Sum\n3. Matrix Addition\n4. Exit\nEnter Your Choice : ";
        cin>>choice;

        switch(choice)
        {
            case 1 : // Factorial
                cout<<"--FACTORIAL--\n";
                cout<<"Enter a Number : ";
                cin>>num;

                for(int i = 1; i <= num; i++)
                {
                    f = f * i;
                }

                cout<<"Factorial of "<<num<<" is "<<f;

                break;

            case 2 : // Array Element Sum
                cout<<"--ARRAY ELEMENT SUM--\n";
                cout<<"Enter 10 element for array \n";
                for(int i = 0; i < arrSize; i++)
                {
                    cout<<"Enter arr["<<i<< "] : ";
                    cin>>arr[i];
                }

                for(int i = 0; i < arrSize; i++)
                {
                    arrSum = arrSum + arr[i];
                }

                cout<<"The sum of all the entered element is "<<arrSum;
                
                break;
                
            case 3 : // Matrix Addition
                cout<<"--MATRIX ADDITION--\n";
                cout << "Enter the number of rows: ";
                cin >> rows;
                cout << "Enter the number of columns: ";
                cin >> cols;

                matrix1[rows][cols], matrix2[rows][cols], sum[rows][cols];

                cout << "Enter elements of the first matrix:\n";
                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols; j++) {
                        cout << "Enter element (" << i + 1 << "," << j + 1 << "): ";
                        cin >> matrix1[i][j];
                    }
                }

                cout << "Enter elements of the second matrix:\n";
                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols; j++) {
                        cout << "Enter element (" << i + 1 << "," << j + 1 << "): ";
                        cin >> matrix2[i][j];
                    }
                }

                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols; j++) {
                        sum[i][j] = matrix1[i][j] + matrix2[i][j];
                    }
                }

                cout << "Sum of the matrices:\n";
                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols; j++) {
                        cout << sum[i][j] << " ";
                    }
                    cout << endl;
                }

                break;
                
            case 4 : // Exit
                break;

            default : // Default
                cout<<"Invalid Choice...!";
        }
        cout<<"\nDo you want to repeat (Y | N) : ";
        cin>>ch;

    } while (ch == 'Y' || ch == 'y');
    
}
