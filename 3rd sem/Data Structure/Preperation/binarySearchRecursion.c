#include<stdio.h>

int binarySearchRecursion(int arr[], int BEG, int END, int key){
    int MID = (BEG + END) / 2;
    if(arr[MID] == key){
        return MID;
    }else if(arr[MID] > key){
        return binarySearchRecursion(arr, BEG, END - 1, key);
    }else if(arr[MID] < key){
        return binarySearchRecursion(arr, BEG + 1, END, key);
    }else{
        return -1;
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
    int Index = binarySearchRecursion(array, 0, size - 1, key);

    if(Index == -1){
        printf("Not Found...");
    }else{
        printf("Found At Index : %d", Index);
    }
}