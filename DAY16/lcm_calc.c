#include <stdio.h>

int main() {
    int a = 12, b = 18;
    int max = (a > b) ? a : b;
    int lcm;
    while (1) {
        if (max % a == 0 && max % b == 0) {
            lcm = max;
            break;
        }
        max++;
    }
    printf("LCM of %d and %d is %d\n", a, b, lcm);
    return 0;
}
