#include <stdio.h>

int main() {
    int a[] = {4, -1, 3, -9, 0, -2};
    int count = 0;
    for (int i = 0; i < 6; i++) if (a[i] < 0) count++;
    printf("Negatives count: %d\n", count);
    return 0;
}
