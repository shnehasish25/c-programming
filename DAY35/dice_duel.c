#include <stdio.h>
#include <stdlib.h>

int main() {
    int p1 = (rand() % 6) + 1;
    int p2 = (rand() % 6) + 1;
    printf("P1: %d, P2: %d -> ", p1, p2);
    if (p1 > p2) printf("P1 wins!\n");
    else if (p2 > p1) printf("P2 wins!\n");
    else printf("Tie!\n");
    return 0;
}
