#include <stdio.h>

int is_divisible(int a, int b) {
    return (b != 0 && a % b == 0);
}

int main() {
    printf("Is 15 div by 3: %d\n", is_divisible(15, 3));
    printf("Is 15 div by 4: %d\n", is_divisible(15, 4));
    return 0;
}
