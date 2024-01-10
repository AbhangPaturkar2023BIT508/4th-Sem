//write a c program for dinamic allocation uing malloc calloc realloc free function
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array = malloc(10 * sizeof(int));

    if (array == NULL) {
        printf("Error: Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < 10; i++) {
        array[i] = i;
    }

    printf("Array contents:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    array = realloc(array, 20 * sizeof(int));

    if (array == NULL) {
        printf("Error: Reallocation failed.\n");
        return 1;
    }

    for (int i = 10; i < 20; i++) {
        array[i] = i;
    }

    printf("Array contents after reallocation:\n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    free(array);

    return 0;
}
