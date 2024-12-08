#include <stdio.h>

int main() {
    char s[] = "hello";
    char rev[10];
    int len = 5;
    for (int i = 0; i < len; i++) rev[i] = s[len - 1 - i];
    rev[len] = '\0';
    printf("Orig: %s, Rev: %s\n", s, rev);
    return 0;
}
