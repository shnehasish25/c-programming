#include <stdio.h>

int main() {
    float price = 45.50;
    int qty = 3;
    float tax = 0.05;
    float total = (price * qty) * (1 + tax);
    printf("Total bill: %.2f\n", total);
    return 0;
}
