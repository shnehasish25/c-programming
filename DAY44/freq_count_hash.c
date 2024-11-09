#include <stdio.h>

int main() {
    int a[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    int n = 10, freq[10] = {0};
    for (int i = 0; i < n; i++) freq[a[i]]++;
    for (int i = 0; i < 10; i++) {
        if (freq[i] > 0) printf("%d -> %d\n", i, freq[i]);
    }
    return 0;
}
