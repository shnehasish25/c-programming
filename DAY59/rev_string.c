#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "developer";
    int n = strlen(s);
    for (int i = 0; i < n / 2; i++) {
        char t = s[i]; s[i] = s[n - 1 - i]; s[n - 1 - i] = t;
    }
    printf("Reversed: %s\n", s);
    return 0;
}
