#include <stdio.h>

int is_power_of_two(int n) {
    return (n > 0) && ((n & (n - 1)) == 0);
}

int main() {
    printf("16 power of 2? %d\n", is_power_of_two(16));
    printf("18 power of 2? %d\n", is_power_of_two(18));
    return 0;
}
