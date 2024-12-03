#include <stdio.h>
#include <string.h>

int main() {
    char a[] = "prefix_abc", b[] = "prefix_xyz";
    printf("Prefix match: %d\n", strncmp(a, b, 7) == 0);
    return 0;
}
