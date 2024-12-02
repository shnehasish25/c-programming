#include <stdio.h>

int main() {
    char empty[] = "";
    printf("Empty string length: %d\n", empty[0] == '\0' ? 0 : 1);
    return 0;
}
