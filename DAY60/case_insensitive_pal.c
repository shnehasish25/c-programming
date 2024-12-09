#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_pal_ci(const char s[]) {
    int l = 0, r = strlen(s) - 1;
    while (l < r) {
        if (tolower(s[l]) != tolower(s[r])) return 0;
        l++; r--;
    }
    return 1;
}

int main() {
    printf("Madam is pal: %d\n", is_pal_ci("Madam"));
    return 0;
}
