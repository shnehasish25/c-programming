#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(12345);
    for (int i = 0; i < 3; i++) {
        printf("Seeded: %d\n", rand());
    }
    return 0;
}
