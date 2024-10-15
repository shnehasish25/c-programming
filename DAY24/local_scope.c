#include <stdio.h>

void test(void) {
    int x = 50;
    printf("Inside test x = %d\n", x);
}

int main() {
    int x = 10;
    printf("Inside main x = %d\n", x);
    test();
    printf("Back in main x = %d\n", x);
    return 0;
}
