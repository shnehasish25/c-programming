#include <stdio.h>

int main() {
    int a[2][2] = {{1, 2}, {3, 4}};
    int b[2][2] = {{1, 2}, {3, 4}};
    int equal = 1;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (a[i][j] != b[i][j]) { equal = 0; break; }
        }
    }
    printf("Matrices are equal? %d\n", equal);
    return 0;
}
