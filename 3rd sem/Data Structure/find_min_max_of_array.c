#include<stdio.h>

void getData(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("Enter Array[%d] : ",i);
        scanf("%d", &arr[i]);
    }
}

void findMinMaxOfArray(int arr[], int size){
    int min = arr[0], max = arr[0];
    for(int i = 1; i < size; i++){
        if(arr[i] < min){
            min = arr[i];
        } else if(arr[i] > max){
            max = arr[i];
        }
    }

    printf("Min : %d and Max : %d", min, max);
}

int main(){
    int size;

    printf("Enter Size for array : ");
    scanf("%d", &size);
    int array[size];
    getData(array, size);

    findMinMaxOfArray(array, size);
    

}