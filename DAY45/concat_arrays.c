#include <stdio.h>

int main() {
    int first[] = {10, 20}, second[] = {30, 40, 50};
    int res[5];
    for (int i = 0; i < 2; i++) res[i] = first[i];
    for (int i = 0; i < 3; i++) res[2 + i] = second[i];
    printf("Total elements: 5\n");
    return 0;
}
