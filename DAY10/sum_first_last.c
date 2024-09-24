#include <stdio.h>

int main() {
    int n = 6129;
    int last = n % 10;
    int first = n;
    while (first >= 10) first /= 10;
    printf("Sum: %d\n", first + last);
    return 0;
}
