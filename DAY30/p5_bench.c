#include <stdio.h>

int loop_sum(int n) {
    int s = 0;
    for (int i = 1; i <= n; i++) s += i;
    return s;
}

int main() {
    printf("Loop sum 1..50 = %d\n", loop_sum(50));
    return 0;
}
