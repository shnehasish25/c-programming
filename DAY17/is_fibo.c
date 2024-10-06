#include <stdio.h>

int main() {
    int num = 21;
    int a = 0, b = 1, found = (num == 0 || num == 1);
    while (b < num) {
        int c = a + b;
        a = b;
        b = c;
        if (b == num) found = 1;
    }
    if (found) printf("%d is a Fibonacci number\n", num);
    else printf("%d is not in Fibonacci series\n", num);
    return 0;
}
