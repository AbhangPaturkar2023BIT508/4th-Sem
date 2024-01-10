// Print Student Data and Employee Data using pointer, array, structure and functions in C.

#include <stdio.h>
#include <stdlib.h>

struct StudentData
{
    char student_name[50];
    long double contact;
    char registration_number[11];
    char department[20];
};

struct EmployeeData
{
    char employee_name[50];
    long double contact;
    char identity_number[11];
    char department[20];
    char shift[20];
};

void setStudentData(struct StudentData std[], int num)
{
    for (int i = 0; i < num; i++)
    {
        printf("Enter details for Student : %d\n", i + 1);
        printf("Student Name        :  ");
        scanf("%s", std[i].student_name);
        printf("Contact No.         :  ");
        scanf("%Lf", &std[i].contact);
        printf("Registration Number :  ");
        scanf("%s", std[i].registration_number);
        printf("Department          :  ");
        scanf("%s", std[i].department);
    }
}

void setEmployeeData(struct EmployeeData emp[], int num)
{
    for (int i = 0; i < num; i++)
    {
        printf("Enter details for Employee : %d\n", i + 1);
        printf("Employee Name       :  ");
        scanf("%s", emp[i].employee_name);
        printf("Contact No.         :  ");
        scanf("%Lf", &emp[i].contact);
        printf("Identity Number     :  ");
        scanf("%s", emp[i].identity_number);
        printf("Department          :  ");
        scanf("%s", emp[i].department);
        printf("Shift               :  ");
        scanf("%s", emp[i].shift);
    }
}

int main()
{
    int choice;

    printf("1. For Student\n2. For Employee\n");
    scanf("%d", &choice);

    int count; 
    int count2; 

    switch (choice)
    {
        case 1:
            printf("How many students you want to store: ");
            scanf("%d", &count);
            struct StudentData *std = (struct StudentData *)malloc(count * sizeof(struct StudentData));
            setStudentData(std, count);

            for (int i = 0; i < count; i++)
            {
                printf("\nSTUDENT NO : %d\n", i + 1);
                printf("Name                 : %s\n", std[i].student_name);
                printf("Contact              : %.0Lf\n", std[i].contact);
                printf("Registration Number  : %s\n", std[i].registration_number);
                printf("Department           : %s\n", std[i].department);
            }
            break;

        case 2:
            printf("How many employees you want to store: ");
            scanf("%d", &count2);
            struct EmployeeData *emp = (struct EmployeeData *)malloc(count2 * sizeof(struct EmployeeData));
            setEmployeeData(emp, count2);

            for (int i = 0; i < count2; i++)
            {
                printf("\nEMPLOYEE NO : %d\n", i + 1);
                printf("Name            : %s\n", emp[i].employee_name);
                printf("Contact         : %.0Lf\n", emp[i].contact);
                printf("Identity Number : %s\n", emp[i].identity_number);
                printf("Department      : %s\n", emp[i].department);
                printf("Shift           : %s\n", emp[i].shift);
            }
            break;

        default:
            printf("Invalid choice\n");
    }
    return 0;
}
