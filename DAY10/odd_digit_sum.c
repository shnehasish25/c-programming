#include <stdio.h>

int main() {
    int n = 246813, sum = 0, t = n;
    while (t > 0) {
        int d = t % 10;
        if (d % 2 != 0) sum += d;
        t /= 10;
    }
    printf("Sum of odd digits: %d\n", sum);
    return 0;
}
