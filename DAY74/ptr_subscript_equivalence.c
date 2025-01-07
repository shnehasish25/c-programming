#include <stdio.h>

int main() {
    int a[] = {5, 10, 15};
    // a[i] == *(a + i)
    for (int i = 0; i < 3; i++) {
        printf("a[%d]=%d, *(a+%d)=%d\n", i, a[i], i, *(a + i));
    }
    return 0;
}
