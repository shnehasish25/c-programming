#include <stdio.h>
#include <ctype.h>

int main() {
    char s[] = "learning c step by step";
    int new_word = 1;
    for (int i = 0; s[i]; i++) {
        if (isspace(s[i])) {
            new_word = 1;
        } else if (new_word) {
            s[i] = toupper(s[i]);
            new_word = 0;
        }
    }
    printf("%s\n", s);
    return 0;
}
