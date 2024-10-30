#include <stdio.h>

int main() {
    int src[5] = {1, 3, 5, 7, 9};
    int dest[5];
    for (int i = 0; i < 5; i++) dest[i] = src[i];
    printf("Copied array: ");
    for (int i = 0; i < 5; i++) printf("%d ", dest[i]);
    printf("\n");
    return 0;
}
