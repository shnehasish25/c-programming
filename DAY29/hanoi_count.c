#include <stdio.h>

int hanoi_moves(int n) {
    if (n == 1) return 1;
    return 2 * hanoi_moves(n - 1) + 1;
}

int main() {
    for (int i = 1; i <= 5; i++) {
        printf("%d disks require %d moves\n", i, hanoi_moves(i));
    }
    return 0;
}
