#include <stdio.h>

int main() {
    char s[] = "2026-11-18";
    for (int i = 0; s[i]; i++) {
        if (s[i] == '-') s[i] = '/';
    }
    printf("%s\n", s);
    return 0;
}
