#include <stdio.h>

int main() {
    int a[] = {5, 10, 15, 20, 25};
    int *p = a;
    printf("*(p + 3) = %d\n", *(p + 3));
    return 0;
}
