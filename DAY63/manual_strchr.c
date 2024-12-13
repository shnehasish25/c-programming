#include <stdio.h>

char* my_strchr(const char *s, int c) {
    while (*s) {
        if (*s == (char)c) return (char*)s;
        s++;
    }
    return NULL;
}

int main() {
    char msg[] = "embedded systems";
    char *p = my_strchr(msg, 's');
    if (p) printf("Found from: %s\n", p);
    return 0;
}
