#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = (int*)malloc(sizeof(int));
    if (p == NULL) return 1;
    *p = 500;
    printf("Allocated int: %d\n", *p);
    free(p);
    return 0;
}
