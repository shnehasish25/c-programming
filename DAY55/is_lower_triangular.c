#include <stdio.h>

int main() {
    int m[3][3] = {
        {1, 0, 0},
        {2, 3, 0},
        {4, 5, 6}
    };
    int lower = 1;
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (m[i][j] != 0) lower = 0;
        }
    }
    printf("Is lower triangular? %d\n", lower);
    return 0;
}
