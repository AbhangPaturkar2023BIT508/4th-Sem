#include<stdio.h>
float tempSum(float arr[], int size){
    float s = 0;
    // int size = sizeof(arr)/sizeof(arr[0]);
    int i = 0;

    do{
        if(arr[i] > 30){
            // printf("%f \n",arr[i] );
            s = s + arr[i];
        }
        i++;
    }while(i < size);
    return s;
}

int main(){
    float TEMP[8] = {10, 20, 30, 25, 25.7, 30.5, 45, 32.2};
    int size = sizeof(TEMP)/sizeof(TEMP[0]);
    // printf("%d", size);
    float sum = tempSum(TEMP, size);

    printf("%f is sum", sum);
    return 0;
}