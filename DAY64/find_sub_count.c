#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "banana";
    char sub[] = "an";
    int count = 0, n = strlen(s), m = strlen(sub);
    for (int i = 0; i <= n - m; i++) {
        if (strncmp(&s[i], sub, m) == 0) count++;
    }
    printf("'%s' appears %d times\n", sub, count);
    return 0;
}
