// Write the C program to Find Element at required Location.

#include <stdio.h>

char elementAt(char ch[], int pos)
{
    return ch[pos];
}

int main()
{
    int pos;
    printf("Enter The position of element in an array : ");
    scanf("%d", &pos);
    pos--;
    char ch[] = "sggsiet";
    printf("'%c' element at given position", elementAt(ch, pos));
    return 0;
}