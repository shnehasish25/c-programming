#include <stdio.h>

int check_sorted(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) return 0;
    }
    return 1;
}

int main() {
    int a[] = {2, 5, 8, 12, 19};
    printf("Is sorted? %d\n", check_sorted(a, 5));
    return 0;
}
