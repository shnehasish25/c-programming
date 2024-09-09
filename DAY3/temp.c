#include <stdio.h>

int main() {
    float c, f;
    printf("Enter Celsius: ");
    if (scanf("%f", &c) == 1) {
        f = (c * 9.0 / 5.0) + 32;
        printf("%.2f C = %.2f F\n", c, f);
    }
    return 0;
}
