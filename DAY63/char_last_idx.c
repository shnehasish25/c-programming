#include <stdio.h>

int main() {
    char s[] = "banana";
    char target = 'a';
    int last = -1;
    for (int i = 0; s[i]; i++) {
        if (s[i] == target) last = i;
    }
    printf("Last '%c' at index: %d\n", target, last);
    return 0;
}
