#include <stdio.h>
#include <math.h>

int main() {
    int n = 1234;
    int last = n % 10;
    int digits = 0, t = n;
    while (t > 0) { digits++; t /= 10; }
    int first = n / (int)pow(10, digits - 1);
    int middle = (n % (int)pow(10, digits - 1)) / 10;
    int swapped = last * (int)pow(10, digits - 1) + middle * 10 + first;
    printf("Original: %d, Swapped: %d\n", n, swapped);
    return 0;
}
