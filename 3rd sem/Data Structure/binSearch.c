#include<stdio.h>

int BIN_SEARCH(int BEG, int END, int ITEM, int arr[]){
    int MID = (BEG + END) / 2;
    if(arr[MID] == ITEM){
        return (MID);
    }else if(arr[MID] > ITEM){
        return BIN_SEARCH(MID+1, END, ITEM, arr);
    }else if(arr[MID] < ITEM){
        return BIN_SEARCH(BEG, MID-1, ITEM, arr);
    }
}

int main(){
    int *array;
    int INPUT[] = {60, 55, 50, 45, 40, 35, 30};
    array = INPUT;
    int size = sizeof(INPUT)/sizeof(INPUT[1]);
    int ITEM = 35;
    int index = BIN_SEARCH(0, size - 1, ITEM, array);
    printf("%d at index %d", ITEM, index);
}