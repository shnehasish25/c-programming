#include <stdio.h>

int main() {
    int n = 6;
    long long fact = 1;
    for (int i = 1; i <= n; i++) fact *= i;
    printf("%d! = %lld\n", n, fact);
    return 0;
}
