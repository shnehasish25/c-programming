#include <stdio.h>

int main() {
    int a[] = {1, 2, 4, 5, 6}; // 3 is missing, n=6
    int n = 6;
    int expected = n * (n + 1) / 2;
    int actual = 0;
    for (int i = 0; i < 5; i++) actual += a[i];
    printf("Missing: %d\n", expected - actual);
    return 0;
}
