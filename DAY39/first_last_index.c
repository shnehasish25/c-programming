#include <stdio.h>

int main() {
    int a[] = {4, 7, 2, 7, 7, 9};
    int target = 7, first = -1, last = -1;
    for (int i = 0; i < 6; i++) {
        if (a[i] == target) {
            if (first == -1) first = i;
            last = i;
        }
    }
    printf("First: %d, Last: %d\n", first, last);
    return 0;
}
