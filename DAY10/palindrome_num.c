#include <stdio.h>

int main() {
    int n = 12321, rev = 0, t = n;
    while (t > 0) {
        rev = rev * 10 + (t % 10);
        t /= 10;
    }
    if (rev == n) printf("%d is palindrome\n", n);
    else printf("%d is not palindrome\n", n);
    return 0;
}
