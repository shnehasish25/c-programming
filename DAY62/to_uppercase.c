#include <stdio.h>

int main() {
    char s[] = "make me uppercase";
    for (int i = 0; s[i]; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
    }
    printf("%s\n", s);
    return 0;
}
