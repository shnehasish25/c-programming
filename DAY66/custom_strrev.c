#include <stdio.h>
#include <string.h>

void my_strrev(char *s) {
    int i = 0, j = strlen(s) - 1;
    while (i < j) {
        char t = s[i]; s[i] = s[j]; s[j] = t;
        i++; j--;
    }
}

int main() {
    char s[] = "abcdef";
    my_strrev(s);
    printf("Reversed: %s\n", s);
    return 0;
}
