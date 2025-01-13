#include <stdio.h>

void copy(char *d, const char *s) {
    while ((*d++ = *s++));
}

int main() {
    char buf[20];
    copy(buf, "Fast copy");
    printf("%s\n", buf);
    return 0;
}
