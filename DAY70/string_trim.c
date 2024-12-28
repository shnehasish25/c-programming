#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[] = "   trimmed   ";
    int start = 0;
    while (isspace(s[start])) start++;
    int end = strlen(s) - 1;
    while (end > start && isspace(s[end])) end--;
    s[end + 1] = '\0';
    printf("Trimmed: [%s]\n", &s[start]);
    return 0;
}
