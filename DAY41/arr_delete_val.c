#include <stdio.h>

int main() {
    int a[] = {10, 20, 30, 40};
    int n = 4, target = 20, found = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == target) { found = 1; }
        if (found && i < n - 1) a[i] = a[i + 1];
    }
    if (found) n--;
    for (int i = 0; i < n; i++) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
