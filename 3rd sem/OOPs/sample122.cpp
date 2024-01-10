#include<stdio.h>

void myFunction(char *inputString){
    if(*inputString && *inputString != ' '){
        putchar(*inputString);
        myFunction(inputString + 1);
        putchar(*inputString);
    }
}

int main(){
    char str[] = "SGGSITDEPT NANDED MAHARASHTRA";
    myFunction(str);
    return 0;
}