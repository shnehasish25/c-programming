#include <stdio.h>

int main() {
    char ch = 'o';
    switch (ch) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("Vowel\n");
            break;
        default:
            printf("Consonant or other\n");
    }
    return 0;
}
