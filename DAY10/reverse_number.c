#include <stdio.h>

int main() {
    int n = 4567, rev = 0;
    int t = n;
    while (t > 0) {
        rev = rev * 10 + (t % 10);
        t /= 10;
    }
    printf("Reverse of %d is %d\n", n, rev);
    return 0;
}
