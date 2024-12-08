#include <stdio.h>
#include <string.h>

void reverse_str(char *s) {
    int l = 0, r = strlen(s) - 1;
    while (l < r) {
        char t = s[l]; s[l] = s[r]; s[r] = t;
        l++; r--;
    }
}

int main() {
    char msg[] = "racecar";
    reverse_str(msg);
    printf("%s\n", msg);
    return 0;
}
