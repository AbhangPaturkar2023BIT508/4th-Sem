#include<stdio.h>

int linearSearchRecursion(int arr[], int size, int key){
    if(arr[size - 1] == key){
        return (size - 1);
    }else{
        return linearSearchRecursion(arr, size - 1, key);
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

    int key;
    printf("Enter Number To Search : ");
    scanf("%d", &key);
    int Index = linearSearchRecursion(array, size, key);

    if(Index == -1){
        printf("Not Found...");
    }else{
        printf("Found At Index : %d", Index);
    }
}