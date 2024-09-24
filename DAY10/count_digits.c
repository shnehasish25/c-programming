#include <stdio.h>

int main() {
    int n = 987654;
    int count = 0;
    int t = n;
    while (t != 0) {
        count++;
        t /= 10;
    }
    printf("%d has %d digits\n", n, count);
    return 0;
}
