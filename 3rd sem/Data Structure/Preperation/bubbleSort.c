#include<stdio.h>

void bubbleSort(int arr[], int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - 1 - i; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for(int i = 0;i < size; i++){
        printf("%d ", arr[i]);
    }
}

int main(){
    int size;
    printf("Enter Number You Want to Store : ");
    scanf("%d",&size);
    
    int array[size];
    printf("Enter %d numbers : ", size);
    for(int i = 0; i < size; i++){
        scanf("%d", &array[i]);
    }

    bubbleSort(array, size);
}