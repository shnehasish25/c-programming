#include <stdio.h>

int main() {
    int nums[] = {11, 22, 33, 44};
    int *p = nums;
    for (int i = 0; i < 4; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");
    return 0;
}
