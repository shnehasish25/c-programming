#include <stdio.h>

int main() {
    int a[] = {10, 50, 40, 20, 50, 30};
    int n = 6;
    int first = -1, second = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] > first) {
            second = first;
            first = a[i];
        } else if (a[i] > second && a[i] != first) {
            second = a[i];
        }
    }
    printf("Largest: %d, Second largest: %d\n", first, second);
    return 0;
}
