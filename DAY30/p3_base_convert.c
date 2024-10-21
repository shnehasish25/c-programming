#include <stdio.h>

void print_binary(int n) {
    if (n > 1) print_binary(n / 2);
    printf("%d", n % 2);
}

int main() {
    printf("13 in binary: ");
    print_binary(13);
    printf("\n");
    return 0;
}
