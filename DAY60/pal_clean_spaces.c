#include <stdio.h>
#include <string.h>

int main() {
    char s[] = "racecar";
    int n = strlen(s), ok = 1;
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - 1 - i]) { ok = 0; break; }
    }
    printf("Result: %s\n", ok ? "Palindrome" : "Not Palindrome");
    return 0;
}
