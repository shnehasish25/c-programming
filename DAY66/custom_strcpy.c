#include <stdio.h>

void my_strcpy(char *dest, const char *src) {
    while (*src) {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

int main() {
    char src[] = "Hello Pointer Copy";
    char dest[30];
    my_strcpy(dest, src);
    printf("Dest: %s\n", dest);
    return 0;
}
