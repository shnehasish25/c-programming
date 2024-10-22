#include <stdio.h>

int main() {
    int n = 25;
    long long bin = 0;
    int rem, place = 1;
    int t = n;
    while (t > 0) {
        rem = t % 2;
        bin += rem * place;
        place *= 10;
        t /= 2;
    }
    printf("Decimal %d = Binary %lld\n", n, bin);
    return 0;
}
