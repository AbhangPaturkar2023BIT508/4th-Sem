#include<stdio.h>

void insertionSort(int arr[], int size){
    for (int i = 1; i < size; i++){
        int temp = arr[i];
        int ptr = i - 1;

        while(temp < arr[ptr] && ptr >= 0){
            arr[ptr+1] = arr[ptr];
            ptr = ptr - 1 ;
        }

        arr[ptr + 1] = temp; 
    }

    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
}

int main(){
    int size;
    printf("Enter size of array u want to store: ");
    scanf("%d", &size);
    int array[size];
    printf("Enter %d number : ",size);
    for(int i = 0; i<size;i++){
        scanf("%d",&array[i]);
    }

    insertionSort(array, size);
}