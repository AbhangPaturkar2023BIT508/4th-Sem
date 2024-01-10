#include<stdio.h>

int binarySearch(int arr[], int size, int num){
    int beg = 0, end = size - 1;
    do{
        int mid = (beg + end) / 2;

        if(arr[mid] == num){
            return mid;
        } else if(num > arr[mid]){
            beg = mid + 1;
        } else if(num < arr[mid]){
            end = mid - 1;
        }
    }while(beg < end);

    return -1;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int num;

    printf("Enter number you want to search : ");
    scanf("%d", &num);

    int sizeofarray = sizeof(arr) / sizeof(arr[0]);

    int foundIndex = binarySearch(arr, sizeofarray, num);

    if(foundIndex == -1){
        printf("%d element not found", num);
    } else{
        printf("%d element found at index %d", num, foundIndex);
    }

    return 0;
    
}