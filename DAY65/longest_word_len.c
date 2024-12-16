#include <stdio.h>
#include <ctype.h>

int main() {
    char s[] = "Write clean code today";
    int max_len = 0, cur_len = 0;
    for (int i = 0; s[i]; i++) {
        if (!isspace(s[i])) cur_len++;
        else {
            if (cur_len > max_len) max_len = cur_len;
            cur_len = 0;
        }
    }
    if (cur_len > max_len) max_len = cur_len;
    printf("Longest word length: %d\n", max_len);
    return 0;
}
