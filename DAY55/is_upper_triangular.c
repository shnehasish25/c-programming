#include <stdio.h>

int main() {
    int m[3][3] = {
        {1, 2, 3},
        {0, 4, 5},
        {0, 0, 6}
    };
    int upper = 1;
    for (int i = 1; i < 3; i++) {
        for (int j = 0; j < i; j++) {
            if (m[i][j] != 0) upper = 0;
        }
    }
    printf("Is upper triangular? %d\n", upper);
    return 0;
}
