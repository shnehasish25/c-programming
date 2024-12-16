#include <stdio.h>
#include <ctype.h>

int main() {
    char s[] = "   spaced    out   sentence   ";
    int words = 0, in_word = 0;
    for (int i = 0; s[i]; i++) {
        if (!isspace(s[i]) && !in_word) { in_word = 1; words++; }
        else if (isspace(s[i])) in_word = 0;
    }
    printf("Words: %d\n", words);
    return 0;
}
