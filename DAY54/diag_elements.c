#include <stdio.h>

int main() {
    int m[3][3] = {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}};
    printf("Diagonals: ");
    for (int i = 0; i < 3; i++) printf("%d ", m[i][i]);
    printf("\n");
    return 0;
}
