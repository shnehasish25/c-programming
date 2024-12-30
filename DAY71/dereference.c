#include <stdio.h>

int main() {
    int val = 100;
    int *p = &val;
    *p = 250; // modify through pointer
    printf("val is now: %d\n", val);
    return 0;
}
