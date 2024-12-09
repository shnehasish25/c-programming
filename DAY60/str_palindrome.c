#include <stdio.h>
#include <string.h>

int is_pal(const char s[]) {
    int l = 0, r = strlen(s) - 1;
    while (l < r) {
        if (s[l] != s[r]) return 0;
        l++; r--;
    }
    return 1;
}

int main() {
    printf("madam is pal: %d\n", is_pal("madam"));
    printf("apple is pal: %d\n", is_pal("apple"));
    return 0;
}
