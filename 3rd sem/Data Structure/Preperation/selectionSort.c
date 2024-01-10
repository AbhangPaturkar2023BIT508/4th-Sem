#include<stdio.h>

void selectionSort(int arr[], int size){
    for(int i = 0 ; i < size; i++){
        int min = arr[i];
        int loc = i;
        
        for(int j = i + 1; j < size; j++){
            if(min > arr[j]){
                min = arr[j];
                loc = j;
            }
        }
        arr[loc] = arr[i];
        arr[i] = min;
    }

    for(int i = 0; i < size; i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    int size = 10;
    int array[10] = {50, 20, 5 , 20, 80, 3, 10, 15, 45};
    // printf("Enter Number You Want to Store : ");
    // scanf("%d",&size);
    
    // int array[size];
    // printf("Enter %d numbers : ", size);
    // for(int i = 0; i < size; i++){
    //     scanf("%d", &array[i]);
    // }

    selectionSort(array, size);
}