// - Dynamic array index sum

#include <stdio.h>
void arraySum(int arr1[],int size1,int arr2[],int size2)
{
    for(int i =0 ;i<size1;i++)
        for(int j=0+i;j<size2;j++)
            if(i == j )
                printf("Addition of [%d][%d] is %d\n",i,j,(arr1[i] +arr2[j]));
}


void getElement(int arr[], int size)
{
    printf("Enter %d elements of an array : ", size);
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
}

int main()
{
    int size1, size2;
    printf("Enter Size of array1 : ");
    scanf("%d", &size1);
    printf("Enter Size of array2 : ");
    scanf("%d", &size2);

    int array1[size1], array2[size2];

    getElement(array1, size1);
    getElement(array2, size2);
    arraySum(array1, size1, array2, size2);
    return 0;
}
