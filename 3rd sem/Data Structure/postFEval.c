//Stack using array
#include<stdio.h>
#define MAXSIZE 100
int STACK[MAXSIZE], TOP = -1, ITEM;
int operand;

void push(int opearand)
{
    if(TOP == (MAXSIZE-1))
    {
        printf("Stack Full");
        return;
    }
    else
    {
        TOP += 1;
        STACK[TOP] = opearand;
    }
}

int pop()
{
    if(TOP < 0)
    {
        return -1;
    }
    else
    {
        operand = STACK[TOP];
        TOP -= 1;
        return operand;
    }
}

int postfixEval(int expression[])
{
    int i = 0;
    while(expression[i] == '\0')
    {
        if(expression[i] >= '0' && expression[i] <= '9')
        {
            push(expression[i] - '0');
        }
        else
        {
            int operand2 = pop();
            int operand1 = pop();

            switch(expression[i])
            {
                case '+':
                    push(operand1 + operand2);
                    break;
                case '-':
                    push(operand1 - operand2);
                    break;
                case '*':
                    push(operand1 * operand2);
                    break;
                case '/':
                    push(operand1 / operand2);
                    break;
            }

        }
    }
    return pop();
} 

int main(){
    int expression[100];
    printf("enter expression : ");
    scanf("%s",&expression);

    int res = postfixEval(expression);
    printf("Result : %d",res);
}