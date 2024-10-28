#include <stdio.h>

int main() {
    int a[] = {4, -2, 7, 0, -1, 9};
    int pos = 0;
    for (int i = 0; i < 6; i++) if (a[i] > 0) pos++;
    printf("Positive numbers count: %d\n", pos);
    return 0;
}
