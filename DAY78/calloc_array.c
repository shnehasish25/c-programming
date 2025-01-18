#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 4;
    int *a = (int*)calloc(n, sizeof(int));
    if (!a) return 1;
    // calloc initializes to zero
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    free(a);
    return 0;
}
