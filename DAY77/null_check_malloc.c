#include <stdio.h>
#include <stdlib.h>

int main() {
    size_t size = 1000;
    char *buf = malloc(size);
    if (!buf) {
        printf("Allocation failed!\n");
        return 1;
    }
    printf("Allocation of %zu bytes successful\n", size);
    free(buf);
    return 0;
}
