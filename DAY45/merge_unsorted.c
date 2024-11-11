#include <stdio.h>

int main() {
    int a[] = {1, 3, 5}, b[] = {2, 4, 6};
    int c[6];
    for (int i = 0; i < 3; i++) c[i] = a[i];
    for (int i = 0; i < 3; i++) c[3 + i] = b[i];
    for (int i = 0; i < 6; i++) printf("%d ", c[i]);
    printf("\n");
    return 0;
}
