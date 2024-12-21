#include <stdio.h>

void my_strcat(char *dest, const char *src) {
    while (*dest) dest++;
    while (*src) {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

int main() {
    char b[30] = "Good ";
    my_strcat(b, "Morning");
    printf("%s\n", b);
    return 0;
}
