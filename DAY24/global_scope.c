#include <stdio.h>

int global_counter = 0;

void increment(void) {
    global_counter++;
}

int main() {
    increment();
    increment();
    printf("Global counter: %d\n", global_counter);
    return 0;
}
