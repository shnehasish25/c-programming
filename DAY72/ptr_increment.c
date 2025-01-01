#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30};
    int *p = arr;
    printf("%d ", *p);
    p++;
    printf("%d ", *p);
    p++;
    printf("%d\n", *p);
    return 0;
}
