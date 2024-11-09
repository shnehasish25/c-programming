#include <stdio.h>

int main() {
    int a[] = {10, 20, 30, 40, 50, 60};
    int sum = 0;
    for (int i = 1; i < 6; i += 2) sum += a[i];
    printf("Sum at odd positions: %d\n", sum);
    return 0;
}
