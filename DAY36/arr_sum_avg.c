#include <stdio.h>

int main() {
    int vals[] = {12, 18, 24, 30, 36};
    int n = 5, sum = 0;
    for (int i = 0; i < n; i++) sum += vals[i];
    float avg = (float)sum / n;
    printf("Sum = %d, Avg = %.2f\n", sum, avg);
    return 0;
}
