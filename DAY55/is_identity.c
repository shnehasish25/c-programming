#include <stdio.h>

int main() {
    int m[3][3] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
    };
    int ok = 1;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j && m[i][j] != 1) ok = 0;
            if (i != j && m[i][j] != 0) ok = 0;
        }
    }
    printf("Is identity? %d\n", ok);
    return 0;
}
