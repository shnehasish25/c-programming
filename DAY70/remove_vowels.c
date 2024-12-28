#include <stdio.h>
#include <ctype.h>

int main() {
    char s[] = "Beautiful Day";
    char res[20];
    int j = 0;
    for (int i = 0; s[i]; i++) {
        char ch = tolower(s[i]);
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            res[j++] = s[i];
        }
    }
    res[j] = '\0';
    printf("Without vowels: %s\n", res);
    return 0;
}
