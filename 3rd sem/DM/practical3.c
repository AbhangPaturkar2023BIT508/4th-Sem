// Write the C program to execute following statements.
// - Sum of array index elements
// - Sum of two array index elements

#include <stdio.h>
// - Sum of array index elements
void arrayIndexSum(int arr[])
{
    printf("Addition of arrayIndexSum : %d\n", *(arr) + *(++arr) + *(++arr));
}

// - Sum of two array index elements
void twoArrayIndexSum(int arr[], int arr1[])
{
    printf("Addition of twoArrayIndexSum : %d\n", *(arr) + *(++arr) + *(++arr) + *(arr1) + *(++arr1) + *(++arr1));
}

int main()
{
    int array1[] = {07, 90, 04};
    int array2[] = {14, 04, 85};

    arrayIndexSum(&array1[0]);
    twoArrayIndexSum(&array1[0], &array2[0]);
    return 0;
}
