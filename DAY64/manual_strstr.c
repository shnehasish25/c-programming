#include <stdio.h>
#include <string.h>

int my_strstr(const char *str, const char *sub) {
    int n = strlen(str), m = strlen(sub);
    for (int i = 0; i <= n - m; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (str[i + j] != sub[j]) break;
        }
        if (j == m) return i;
    }
    return -1;
}

int main() {
    char s[] = "find the needle in the haystack";
    printf("Needle found at index: %d\n", my_strstr(s, "needle"));
    return 0;
}
