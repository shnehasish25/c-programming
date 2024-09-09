#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    if (scanf("%d %d", &a, &b) == 2) {
        printf("Add: %d\n", a + b);
        printf("Sub: %d\n", a - b);
        printf("Mul: %d\n", a * b);
        if (b != 0) {
            printf("Div: %d\n", a / b);
        }
    }
    return 0;
}
