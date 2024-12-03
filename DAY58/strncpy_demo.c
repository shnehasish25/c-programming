#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Elephant";
    char dest[10] = {0};
    strncpy(dest, src, 4);
    printf("Prefix: %s\n", dest);
    return 0;
}
