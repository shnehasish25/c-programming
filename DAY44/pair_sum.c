#include <stdio.h>

int main() {
    int a[] = {1, 5, 7, -1, 5};
    int target = 6, n = 5;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] + a[j] == target) {
                printf("Pair (%d, %d)\n", a[i], a[j]);
            }
        }
    }
    return 0;
}
