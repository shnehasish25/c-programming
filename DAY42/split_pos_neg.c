#include <stdio.h>

int main() {
    int a[] = {-2, 5, -8, 12, 0, -1, 7};
    int pos[7], neg[7];
    int p = 0, n = 0;
    for (int i = 0; i < 7; i++) {
        if (a[i] >= 0) pos[p++] = a[i];
        else neg[n++] = a[i];
    }
    printf("Pos count=%d, Neg count=%d\n", p, n);
    return 0;
}
