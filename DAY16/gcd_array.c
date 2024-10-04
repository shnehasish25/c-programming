#include <stdio.h>

int gcd(int a, int b) {
    while (b) { int t = b; b = a % b; a = t; }
    return a;
}

int main() {
    int nums[] = {24, 36, 48};
    int res = nums[0];
    for (int i = 1; i < 3; i++) res = gcd(res, nums[i]);
    printf("GCD of array: %d\n", res);
    return 0;
}
