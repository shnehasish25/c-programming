#include <stdio.h>
#include <stdlib.h>

int main() {
    int heads = 0, tails = 0;
    for (int i = 0; i < 100; i++) {
        if (rand() % 2 == 0) heads++;
        else tails++;
    }
    printf("100 tosses: Heads=%d, Tails=%d\n", heads, tails);
    return 0;
}
