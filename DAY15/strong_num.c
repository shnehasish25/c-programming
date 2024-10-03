#include <stdio.h>

int fact(int x) {
    int f = 1;
    for (int i = 1; i <= x; i++) f *= i;
    return f;
}

int main() {
    int n = 145, sum = 0, t = n;
    while (t > 0) {
        sum += fact(t % 10);
        t /= 10;
    }
    if (sum == n) printf("%d is Strong number\n", n);
    else printf("%d is not Strong\n", n);
    return 0;
}
