#include <stdio.h>

int main() {
    int a[] = {9, 5, 1, 4, 3};
    int n = 5;
    for (int i = 1; i < n; i++) {
        int key = a[i], j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
        printf("Inserted %d at position %d\n", key, j + 1);
    }
    return 0;
}
