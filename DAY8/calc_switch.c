#include <stdio.h>

int main() {
    char op = '+';
    int a = 20, b = 6;
    switch (op) {
        case '+': printf("%d\n", a + b); break;
        case '-': printf("%d\n", a - b); break;
        case '*': printf("%d\n", a * b); break;
        case '/': printf("%d\n", a / b); break;
        default: printf("Unknown op\n");
    }
    return 0;
}
