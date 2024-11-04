#include <stdio.h>

int main() {
    int a[] = {10, 20, 30, 40, 50};
    int key = 35;
    int l = 0, r = 4, found = 0;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (a[m] == key) { found = 1; break; }
        else if (a[m] < key) l = m + 1;
        else r = m - 1;
    }
    printf("Found %d? %d\n", key, found);
    return 0;
}
