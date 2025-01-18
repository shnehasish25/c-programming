#include <stdio.h>
#include <stdlib.h>

int main() {
    int cap = 2, size = 0;
    int *arr = malloc(cap * sizeof(int));
    for (int i = 1; i <= 5; i++) {
        if (size == cap) {
            cap *= 2;
            arr = realloc(arr, cap * sizeof(int));
        }
        arr[size++] = i * 100;
    }
    printf("Final size: %d, capacity: %d\n", size, cap);
    free(arr);
    return 0;
}
