#include <stdio.h>

int main() {
    char s[] = "One two three four";
    int spaces = 0;
    for (int i = 0; s[i]; i++) if (s[i] == ' ') spaces++;
    printf("Total spaces: %d\n", spaces);
    return 0;
}
