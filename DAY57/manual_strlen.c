#include <stdio.h>

int my_strlen(const char s[]) {
    int len = 0;
    while (s[len] != '\0') len++;
    return len;
}

int main() {
    char msg[] = "Programming in C";
    printf("Length: %d\n", my_strlen(msg));
    return 0;
}
