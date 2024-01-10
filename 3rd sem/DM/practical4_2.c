// Write the C program to Find common element in Dynamic array.

#include <stdio.h>
#include <string.h>
void intersection(char ch1[], char ch2[], int s1, int s2)
{
    for (int i = 0; i < s1; i++)
    {
        for (int j = 0; j < s2; j++)
        {
            if (ch1[i] == ch2[j])
            {
                printf("%c\t", ch1[i]);
                break;
            }
        }
    }
}

int main()
{
    char ch1[100], ch2[100];
    printf("Enter the String 1 : ");
    scanf("%s", &ch1);
    printf("Enter the String 2 : ");
    scanf("%s", &ch2);
    int s1 = strlen(ch1);
    int s2 = strlen(ch2);
    printf("Common Characters : ");
    intersection(ch1, ch2, s1, s2);
    return 0;
}
