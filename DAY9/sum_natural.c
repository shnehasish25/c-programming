#include <stdio.h>

int main() {
    int n = 100, i = 1, sum = 0;
    while (i <= n) {
        sum += i;
        i++;
    }
    printf("Sum 1..100 = %d\n", sum);
    return 0;
}
