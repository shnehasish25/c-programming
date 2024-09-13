#include <stdio.h>

int main() {
    int a = 12, b = 45, c = 32;
    int max;
    if (a >= b && a >= c)
        max = a;
    else if (b >= c)
        max = b;
    else
        max = c;

    printf("Largest: %d\n", max);
    return 0;
}
