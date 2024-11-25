#include <stdio.h>

int main() {
    // A^2
    int a[2][2] = {{1, 1}, {1, 0}};
    int res[2][2] = {0};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) res[i][j] += a[i][k] * a[k][j];
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}
