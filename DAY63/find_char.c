#include <stdio.h>

int main() {
    char s[] = "Hello World";
    char target = 'o';
    int idx = -1;
    for (int i = 0; s[i]; i++) {
        if (s[i] == target) { idx = i; break; }
    }
    printf("First '%c' at index: %d\n", target, idx);
    return 0;
}
