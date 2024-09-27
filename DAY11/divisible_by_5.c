#include <stdio.h>

int main() {
    int count = 0;
    for (int i = 1; i <= 50; i++) {
        if (i % 5 == 0) count++;
    }
    printf("Count of multiples of 5 up to 50: %d\n", count);
    return 0;
}
