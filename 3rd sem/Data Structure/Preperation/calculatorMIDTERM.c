#include<stdio.h>

float division(int a, int b){
    float c = (float)a / b; 
    return c;
}

int modulus(int a, int b){
    int c = a % b;
    return c;
}

int power(int a, int b){
    int c = 1;
    for(int i = 1; i <= b; i++){
        c = a * a;
    }
    return c;
}

int main(){
    while(1){
        char ch;
        int a, b, c;
        float d;

        printf(" D: Division\n M: Modulus\n P: Power\n N: Exit\n");
        printf("Enter 1st No. : ");
        scanf("%d", &a);
        printf("Enter 2nd No. : ");
        scanf("%d",&b);
        printf("Enter your Choice : ");
        scanf(" %c", &ch);
        switch(ch){
            case 'd':
            case 'D':
                d = division(a, b);
                printf("Output : %f\n", d);
                continue;
            
            case 'm':
            case 'M':
                c = modulus(a, b);
                printf("Output : %d\n",c);
                continue;
            
            case 'p':
            case 'P':
                c = power(a, b);
                printf("Output : %d\n",c);

            case 'n':
            case 'N':
                break;
        }

    }
}