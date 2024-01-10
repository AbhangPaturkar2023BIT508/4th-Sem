/* 
Q5. Create a class of student and perform following operations
    1. Get user data - roll no, name, marks
    2. Calculate - total, grades
    3. Print data
    4. Create class object single and multiple
*/

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    double marks;
    double totalMarks;
    char grade;

public:
    Student(int r, string n, double m){
        rollNo = r;
        name = n;
        marks = m;
        calculateTotal();
        calculateGrade();
    }

    void calculateTotal() {
        totalMarks = marks;
    }

    void calculateGrade() {
        if (marks >= 90) {
            grade = 'A';
        } else if (marks >= 80) {
            grade = 'B';
        } else if (marks >= 70) {
            grade = 'C';
        } else if (marks >= 60) {
            grade = 'D';
        } else {
            grade = 'F';
        }
    }

    void printData() {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
        cout << "Total Marks: " << totalMarks << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    Student single(101, "Jack", 85.5);

    cout << "Student Information (Single Object):" << endl;
    single.printData();
    cout << endl;

    Student students[3] = {
        Student(201, "Bob", 92.5),
        Student(301, "William", 78.0),
        Student(401, "David", 60.5)
    };

    cout << "Student Information (Multiple Objects):" << endl;
    for (int i = 0; i < 3; i++) {
        students[i].printData();
        cout << endl;
    }

    return 0;
}
