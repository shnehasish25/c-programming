#include <stdio.h>

int main() {
    int n = 12345, sum = 0, temp = n;
    while (temp != 0) {
        sum += temp % 10;
        temp /= 10;
    }
    printf("Sum of digits in %d: %d\n", n, sum);
    return 0;
}
