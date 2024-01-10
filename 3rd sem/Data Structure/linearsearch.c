#include<stdio.h>

int linearSearch(int arr[], int size, int num){
    for(int i = 0; i < size; i++){
        if(num == arr[i]){
            return i;
        }
    }

    return -1;
}

int main(){
    int arr[] = {4, 5, 2, 1, 8, 10};
    int num;

    printf("Enter the number you want to find : ");
    scanf("%d",&num);

    int sizeofarray = sizeof(arr) / sizeof(arr[0]);

    int foundIndex = linearSearch(arr, sizeofarray, num);
    
    if(foundIndex == -1)
    {
        printf("%d not found in array", num);
    } 
    else
    {
        printf("%d is found at index %d", num, foundIndex);
    }
}
