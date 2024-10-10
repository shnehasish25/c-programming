#include <stdio.h>

int find_max(int x, int y) {
    return (x > y) ? x : y;
}

int main() {
    printf("Max of 45 and 67 is %d\n", find_max(45, 67));
    return 0;
}
