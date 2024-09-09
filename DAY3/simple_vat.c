#include <stdio.h>

int main() {
    float net = 80.0;
    float vat_rate = 0.20;
    float gross = net * (1 + vat_rate);
    printf("Gross price: %.2f\n", gross);
    return 0;
}
