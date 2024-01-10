// Write the C program to Find common elements in two array.

#include <stdio.h>

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
    char ch1[] = {'s', 'g', 'g', 's', 'i', 'e', 't'};
    char ch2[] = {'m', 'e', 's', 's', 'a', 'g', 'e'};
    int s1 = sizeof(ch1) / sizeof(ch1[0]); 
    int s2 = sizeof(ch2) / sizeof(ch2[0]);
    printf("Common Characters : ");
    intersection(ch1, ch2, s1, s2);
    return 0;
}
