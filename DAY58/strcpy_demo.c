#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Source data";
    char dest[20];
    strcpy(dest, src);
    printf("Dest: %s\n", dest);
    return 0;
}
