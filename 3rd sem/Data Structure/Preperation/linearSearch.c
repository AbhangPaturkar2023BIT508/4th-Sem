#include<stdio.h>

int linearSearch(int arr[], int size, int key){
    for(int i = 0; i < size; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
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
    int Index = linearSearch(array, size, key);

    if(Index == -1){
        printf("Not Found...");
    }else{
        printf("Found At Index : %d", Index);
    }
}