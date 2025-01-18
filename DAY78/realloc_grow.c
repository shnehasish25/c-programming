#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a = malloc(2 * sizeof(int));
    a[0] = 10; a[1] = 20;
    a = realloc(a, 4 * sizeof(int));
    a[2] = 30; a[3] = 40;
    for (int i = 0; i < 4; i++) printf("%d ", a[i]);
    printf("\n");
    free(a);
    return 0;
}
