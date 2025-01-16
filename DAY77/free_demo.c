#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = malloc(10 * sizeof(int));
    // always set to NULL after free to avoid dangling pointer
    free(ptr);
    ptr = NULL;
    printf("Memory freed safely\n");
    return 0;
}
