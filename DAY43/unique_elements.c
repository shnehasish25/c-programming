#include <stdio.h>

int main() {
    int a[] = {1, 2, 2, 3, 4, 4, 5};
    int n = 7;
    printf("Unique: ");
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (a[i] == a[j]) count++;
        }
        if (count == 1) printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
