// concatination using pointer

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20] = "Abhang ";
    char str2[20] = "Paturkar";

    char *ptr1 = str1;
    char *ptr2 = str2;

    char result[100];

    strcpy(result, ptr1);
    strcat(result, ptr2);

    printf("Conacatinated string = %s \n", result);

    return 0;
}