#include <stdio.h>

int main() {
    int a[] = {2, 4, 7, 2, 8, 4, 9};
    int n = 7;
    printf("Duplicates: ");
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                printf("%d ", a[i]);
                break;
            }
        }
    }
    printf("\n");
    return 0;
}
