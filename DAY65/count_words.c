#include <stdio.h>
#include <ctype.h>

int main() {
    char s[] = "C is powerful fast and simple";
    int words = 0, in_word = 0;
    for (int i = 0; s[i]; i++) {
        if (!isspace(s[i]) && !in_word) {
            in_word = 1;
            words++;
        } else if (isspace(s[i])) {
            in_word = 0;
        }
    }
    printf("Word count: %d\n", words);
    return 0;
}
