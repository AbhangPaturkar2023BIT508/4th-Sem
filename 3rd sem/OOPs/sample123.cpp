#include<stdio.h>

int performFirstOperation(int *a, int *b){
    *a = 3 *( (*a) + (*b));
    return *a;
}

int performSecondOperation(int a, int b){
    a = 3 *(a + b);
    return a;
}

int main(){
    int a = 5, b = 3;

    printf("%d %d\n", a, b);

    b = performFirstOperation(&b, &a);
    printf("%d %d\n", a, b);

    a = performSecondOperation(b, a);
    printf("%d %d\n", a, b);
}