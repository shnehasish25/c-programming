#include <stdio.h>
#include <stdlib.h>

int main() {
    for (int i = 0; i < 6; i++) {
        int dice = (rand() % 6) + 1;
        printf("Roll %d: %d\n", i + 1, dice);
    }
    return 0;
}
