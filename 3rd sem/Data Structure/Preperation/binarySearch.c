#include<stdio.h>

int binarySearch(int arr[], int size, int key){
    int BEG = 0, END = size - 1;

    while(BEG <= END){
        int MID = (BEG + END) / 2;
        if(arr[MID] == key){
            return MID;
        }else if(arr[MID] > key){
            END = MID - 1;
        }else if(arr[MID] < key){
            BEG = MID + 1;
        }else{
            return -1;
        }
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
    int Index = binarySearch(array, size, key);

    if(Index == -1){
        printf("Not Found...");
    }else{
        printf("Found At Index : %d", Index);
    }
}