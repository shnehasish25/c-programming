#include <stdio.h>

int main() {
    int choice = 2;
    printf("1. Balance\n2. Withdraw\n3. Deposit\n");
    switch (choice) {
        case 1: printf("Balance is $500\n"); break;
        case 2: printf("Withdraw option selected\n"); break;
        case 3: printf("Deposit option selected\n"); break;
        default: printf("Invalid choice\n");
    }
    return 0;
}
