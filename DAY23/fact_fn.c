#include <stdio.h>

long long factorial(int n) {
    long long ans = 1;
    for (int i = 1; i <= n; i++) ans *= i;
    return ans;
}

int main() {
    printf("5! = %lld\n", factorial(5));
    printf("7! = %lld\n", factorial(7));
    return 0;
}
