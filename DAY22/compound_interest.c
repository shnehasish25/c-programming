#include <stdio.h>
#include <math.h>

int main() {
    double p = 5000, r = 5.0, t = 2;
    double amount = p * pow((1 + r / 100.0), t);
    printf("Compound Amount: %.2f\n", amount);
    return 0;
}
