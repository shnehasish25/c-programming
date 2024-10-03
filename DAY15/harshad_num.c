#include <stdio.h>

int main() {
    int n = 18, sum = 0, t = n;
    while (t > 0) {
        sum += t % 10;
        t /= 10;
    }
    if (n % sum == 0) printf("%d is Harshad number\n", n);
    else printf("%d is not Harshad\n", n);
    return 0;
}
