#include <stdio.h>

int main() {
    int nums[] = {5, 12, 8, -1, 14};
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        if (nums[i] < 0) break;
        sum += nums[i];
    }
    printf("Sum before negative: %d\n", sum);
    return 0;
}
