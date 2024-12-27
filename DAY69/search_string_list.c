#include <stdio.h>
#include <string.h>

int main() {
    char cities[3][20] = {"Paris", "Tokyo", "London"};
    char target[] = "Tokyo";
    int found = -1;
    for (int i = 0; i < 3; i++) {
        if (strcmp(cities[i], target) == 0) { found = i; break; }
    }
    printf("Found at index: %d\n", found);
    return 0;
}
