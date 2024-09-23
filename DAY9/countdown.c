#include <stdio.h>

int main() {
    int count = 5;
    while (count > 0) {
        printf("%d... ", count);
        count--;
    }
    printf("Blastoff!\n");
    return 0;
}
