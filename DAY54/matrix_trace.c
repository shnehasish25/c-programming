#include <stdio.h>

int main() {
    int m[3][3] = {{2, 0, 0}, {0, 3, 0}, {0, 0, 4}};
    int trace = 0;
    for (int i = 0; i < 3; i++) trace += m[i][i];
    printf("Trace: %d\n", trace);
    return 0;
}
