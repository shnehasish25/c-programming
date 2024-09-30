#include <stdio.h>

int main() {
    int num = -5;
    // simulating do-while input validation
    do {
        num += 3;
    } while (num < 0);
    printf("Valid positive number reached: %d\n", num);
    return 0;
}
