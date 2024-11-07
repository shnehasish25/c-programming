#include <stdio.h>

int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int even[8], odd[8];
    int e = 0, o = 0;
    for (int i = 0; i < 8; i++) {
        if (a[i] % 2 == 0) even[e++] = a[i];
        else odd[o++] = a[i];
    }
    printf("Even: "); for (int i = 0; i < e; i++) printf("%d ", even[i]);
    printf("\nOdd: "); for (int i = 0; i < o; i++) printf("%d ", odd[i]);
    printf("\n");
    return 0;
}
