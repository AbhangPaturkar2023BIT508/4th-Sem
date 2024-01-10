#include <stdio.h>

void eval();

int main() {
    eval();
    return 0;
}

void eval() {
    int P[] = {1, 1, 1, 1};
    int Q[] = {1, 1, 1, 1};
    printf("The Equation is (P&&Q)||P\n");
    printf("P\tQ\tP&&Q\tY\t(P && Q) || P\n");

    int tautology = 0;
    int contradiction = 0;
    int contingency = 0;

    for (int i = 1; i < 3; i++) {
        for (int j = 1; j < 3; j++) {
            int Y = P[i] && Q[j];
            int result = Y || P[i];
            printf("%d\t%d\t%d\t%d\t%d\n", P[i], Q[j], Y, Y, result);

            if (result == 1) {
                tautology++;
            } else {
                contradiction++;
            }
        }
    }

    if (tautology == 4) {
        printf("The expression is a tautology.\n");
    } else if (contradiction == 4) {
        printf("The expression is a contradiction.\n");
    } else {
        printf("The expression is a contingency.\n");
    }
}
