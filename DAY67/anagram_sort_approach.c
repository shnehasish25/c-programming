#include <stdio.h>
#include <string.h>

void sort_str(char *s) {
    int n = strlen(s);
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (s[j] > s[j + 1]) { char t = s[j]; s[j] = s[j + 1]; s[j + 1] = t; }
}

int main() {
    char s1[] = "heart", s2[] = "earth";
    sort_str(s1); sort_str(s2);
    printf("Match after sort: %d\n", strcmp(s1, s2) == 0);
    return 0;
}
