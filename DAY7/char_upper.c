#include <stdio.h>

int main() {
    char c = 'm';
    if (c >= 'a' && c <= 'z') c -= 32;
    printf("Capital: %c\n", c);
    return 0;
}
