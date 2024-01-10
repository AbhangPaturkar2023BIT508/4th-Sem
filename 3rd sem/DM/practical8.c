#include <stdio.h>

void eval();

int main()
{
    int P[] = {0, 0, 1, 1};
    int Q[] = {0, 1, 0, 1};

    printf("The Equation is P && !(P && Q) \n");
    printf("P\t Q\tP && Q\t !(P && Q)\t P && !(P && Q) \n");

    int tautology = 0;
    int contradiction = 0;
    int contingency = 0;

    for (int i = 1; i < 3; i++)
    {
        for (int j = 1; j < 3; j++)
        {
            int a = P[i] && Q[j];
            int b = !a;
            int result = b && P[i];
            printf("%d\t %d\t   %d\t     %d\t\t     %d\n", P[i], Q[j], a, b, result);

            if (result == 1)
            {
                tautology++;
            }
            else
            {
                contradiction++;
            }
        }
    }

    if (tautology == 4)
    {
        printf("The expression is a tautology.\n");
    }
    else if (contradiction == 4)
    {
        printf("The expression is a contradiction.\n");
    }
    else
    {
        printf("The expression is a contingency.\n");
    }
}
