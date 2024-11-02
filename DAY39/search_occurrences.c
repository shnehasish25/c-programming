#include <stdio.h>

int main() {
    int a[] = {2, 5, 2, 8, 2, 9, 1};
    int n = 7, target = 2, count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == target) count++;
    }
    printf("%d appears %d times\n", target, count);
    return 0;
}
