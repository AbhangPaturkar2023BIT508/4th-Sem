#include<stdio.h>

void display(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int insertElement(int arr[], int size, int element, int index, int capacity ){
    if(size >= capacity){
        return 0;
    }
    else{
        for(int i = size-1; i >= index; i--){
            arr[i + 1] = arr[i];
        }
        arr[index] = element;
        return 1;
    }
}

int main(){
    int capacity = 7;
    int arr[7] = {4, 5, 8, 2, 52, 23};
    int size = 7, element = 22, index = 3;
    display(arr, size);
    if(insertElement(arr, size, element, index, capacity)){
        size += 1;
        display(arr, size);
    }
    else{
        printf("Not inserted");
    }
    
}