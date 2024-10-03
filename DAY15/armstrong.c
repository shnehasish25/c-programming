#include <stdio.h>

int main() {
    int n = 153, sum = 0, t = n;
    while (t > 0) {
        int d = t % 10;
        sum += d * d * d;
        t /= 10;
    }
    if (sum == n) printf("%d is Armstrong\n", n);
    else printf("%d is not Armstrong\n", n);
    return 0;
}
