#include <stdio.h>

int main() {
    char fruits[3][20] = {"Apple", "Banana", "Cherry"};
    for (int i = 0; i < 3; i++) {
        printf("%d: %s\n", i + 1, fruits[i]);
    }
    return 0;
}
