#include <stdio.h>

int is_sorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) return 0;
    }
    return 1;
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    printf("Is sorted: %d\n", is_sorted(a, 5));
    return 0;
}
