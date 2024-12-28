#include <stdio.h>

int main() {
    char s[] = "remove all spaces here";
    int j = 0;
    for (int i = 0; s[i]; i++) {
        if (s[i] != ' ') s[j++] = s[i];
    }
    s[j] = '\0';
    printf("%s\n", s);
    return 0;
}
