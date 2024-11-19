#include <stdio.h>

int main() {
    int a[6] = {2, 4, 6, 8, 10};
    int key = 5, j = 4;
    while (j >= 0 && a[j] > key) {
        a[j + 1] = a[j];
        j--;
    }
    a[j + 1] = key;
    for (int i = 0; i < 6; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
