#include<stdio.h>

int myfunc()
{
    static int i=0;
    i++;
    return i;
}

int main()
{
    printf("Value:%d",myfunc());
    printf("\nValue:%d",myfunc());

    return 0;

}