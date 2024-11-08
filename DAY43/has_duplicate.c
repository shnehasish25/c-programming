#include <stdio.h>

int has_dup(int a[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) return 1;
        }
    }
    return 0;
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    printf("Has duplicates? %d\n", has_dup(a, 5));
    return 0;
}
