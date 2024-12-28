#include <stdio.h>

int main() {
    char s[] = "aaabbcccc";
    for (int i = 0; s[i]; i++) {
        int count = 1;
        while (s[i] == s[i + 1]) { count++; i++; }
        printf("%c%d", s[i], count);
    }
    printf("\n");
    return 0;
}
