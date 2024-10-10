#include <stdio.h>

int is_even(int n) {
    return (n % 2 == 0);
}

int main() {
    int val = 16;
    if (is_even(val)) printf("%d is even\n", val);
    else printf("%d is odd\n", val);
    return 0;
}
