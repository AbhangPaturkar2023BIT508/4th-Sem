#include<stdio.h>

void getData(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("Enter Array[%d] : ",i);
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
}

void mergeArray(int arr1[], int s1, int arr2[], int s2){
    int size3 = s1 + s2;
    int mergeArray[size3];

    for(int i = 0; i < s1; i++){
        mergeArray[i] = arr1[i];
    }

    for(int i = 0, j = s1; i < s2, j < size3; i++, j++){
        mergeArray[j] = arr2[i];
    }

    printf("Merged Array : ");
    printArray(mergeArray, size3);
}

int main(){
    int size1, size2;

    printf("Enter Size for 1st array : ");
    scanf("%d", &size1);
    int array1[size1];
    getData(array1, size1);

    printf("Enter Size for 2st array : ");
    scanf("%d", &size2);
    int array2[size2];
    getData(array2, size2);
    
    mergeArray(array1, size1, array2, size2);

}