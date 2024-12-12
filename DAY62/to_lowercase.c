#include <stdio.h>

int main() {
    char s[] = "SHOUTING TEXT";
    for (int i = 0; s[i]; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
    }
    printf("%s\n", s);
    return 0;
}
