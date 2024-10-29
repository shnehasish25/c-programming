#include <stdio.h>

int main() {
    int a[] = {-5, 12, 3, -1, 8, 2};
    int min_pos = 999999;
    for (int i = 0; i < 6; i++) {
        if (a[i] > 0 && a[i] < min_pos) min_pos = a[i];
    }
    printf("Smallest positive: %d\n", min_pos);
    return 0;
}
