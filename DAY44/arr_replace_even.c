#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < 6; i++) {
        if (a[i] % 2 == 0) a[i] = 0;
    }
    for (int i = 0; i < 6; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
