#include <stdio.h>

int main() {
    int n = 8742;
    int last = n % 10;
    int first = n;
    while (first >= 10) {
        first /= 10;
    }
    printf("First: %d, Last: %d\n", first, last);
    return 0;
}
