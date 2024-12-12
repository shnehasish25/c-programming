#include <stdio.h>

int main() {
    char s[] = "AbCdEfG";
    for (int i = 0; s[i]; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
        else if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
    }
    printf("Toggled: %s\n", s);
    return 0;
}
