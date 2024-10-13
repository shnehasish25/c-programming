#include <stdio.h>
#include <math.h>

int main() {
    double a = 1, b = -5, c = 6;
    double d = b * b - 4 * a * c;
    if (d >= 0) {
        double r1 = (-b + sqrt(d)) / (2 * a);
        double r2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots: %.2f, %.2f\n", r1, r2);
    }
    return 0;
}
