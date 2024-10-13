#include <stdio.h>
#include <math.h>

double calc_hypot(double a, double b) {
    return sqrt(a * a + b * b);
}

int main() {
    printf("Hypotenuse of 3 and 4: %.2f\n", calc_hypot(3.0, 4.0));
    return 0;
}
