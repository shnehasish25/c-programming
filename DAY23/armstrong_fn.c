#include <stdio.h>

int is_armstrong(int n) {
    int sum = 0, t = n;
    while (t > 0) {
        int d = t % 10;
        sum += d * d * d;
        t /= 10;
    }
    return sum == n;
}

int main() {
    printf("153 is armstrong? %d\n", is_armstrong(153));
    printf("120 is armstrong? %d\n", is_armstrong(120));
    return 0;
}
