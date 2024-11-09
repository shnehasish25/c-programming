#include <stdio.h>

int main() {
    int a[] = {3, 3, 4, 2, 3, 3, 3, 5};
    int n = 8, majority = -1;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (a[i] == a[j]) count++;
        }
        if (count > n / 2) { majority = a[i]; break; }
    }
    printf("Majority element: %d\n", majority);
    return 0;
}
