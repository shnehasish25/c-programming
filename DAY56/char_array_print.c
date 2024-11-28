#include <stdio.h>

int main() {
    char s[] = "Code";
    for (int i = 0; s[i] != '\0'; i++) {
        printf("s[%d] = %c\n", i, s[i]);
    }
    return 0;
}
