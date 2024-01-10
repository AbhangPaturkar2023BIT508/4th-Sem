#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define MAX_SIZE 50
int Stack[MAX_SIZE];
int TOP = -1;

void push(int key){
    if(TOP == (MAX_SIZE - 1)){
        printf("Overflow");
    }else{
        TOP++;
        Stack[TOP] = key;
    }
}

int pop(){
    if(TOP == -1){
        printf("Underflow");
    }else{
        int temp = Stack[TOP];
        TOP--;
        return temp;
    }
}

int isOperator(char ch){
    return(ch == '+' || ch == '-' || ch == '*' || ch == '/');
}

int polishEvaluation(char* expression){
    int i = 0;
    while(expression[i] == '\0'){
        if(isdigit(expression[i])){
            push(expression[i]);
        }else if(isOperator(expression[i])){
            int op1 = pop();
            int op2 = pop();
            int result;

            switch(expression[i]){
                case '+':result = op1 + op2;break;
                case '-':result = op2 - op1; break;
                case '*':result = op2 * op1; break;
                case '/':
                    if(op1 == 0){
                        printf("Divide by zero error");
                        exit(EXIT_FAILURE);
                    }else{
                        result = op2 / op1;
                    }
                    break;
                default: 
                    printf("Invalid..");
                    exit(EXIT_FAILURE);
            }
            push(result);
        }
    }

    if(TOP == 0){
        int reuslt = pop();
    }
}

int main(){
    char* expression = "5 6 2 * 12 4 / -";
    int result = polishEvaluation(expression);
    printf("%d",result);
}