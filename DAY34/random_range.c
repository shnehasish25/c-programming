#include <stdio.h>
#include <stdlib.h>

int rand_between(int min, int max) {
    return min + rand() % (max - min + 1);
}

int main() {
    for (int i = 0; i < 4; i++) {
        printf("Between 10 and 50: %d\n", rand_between(10, 50));
    }
    return 0;
}
