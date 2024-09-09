#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    if (scanf("%d", &num) == 1) {
        printf("You entered: %d\n", num);
    }
    return 0;
}
