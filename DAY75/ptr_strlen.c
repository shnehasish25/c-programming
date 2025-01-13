#include <stdio.h>

int ptr_len(const char *s) {
    const char *start = s;
    while (*s) s++;
    return s - start;
}

int main() {
    printf("Length: %d\n", ptr_len("Antigravity"));
    return 0;
}
