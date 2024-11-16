#include <stdio.h>

int main() {
    int a[] = {4, 3, 2, 1};
    int n = 4;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int t = a[j]; a[j] = a[j + 1]; a[j + 1] = t;
            }
        }
        printf("Pass %d done\n", i + 1);
    }
    return 0;
}
