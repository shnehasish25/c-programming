#include <stdio.h>

void hit_count(void) {
    static int count = 0;
    count++;
    printf("Visit number: %d\n", count);
}

int main() {
    hit_count();
    hit_count();
    hit_count();
    return 0;
}
