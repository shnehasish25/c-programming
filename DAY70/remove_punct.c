#include <stdio.h>
#include <ctype.h>

int main() {
    char s[] = "Hello, world! Welcome to C.";
    char clean[50];
    int j = 0;
    for (int i = 0; s[i]; i++) {
        if (!ispunct(s[i])) clean[j++] = s[i];
    }
    clean[j] = '\0';
    printf("%s\n", clean);
    return 0;
}
