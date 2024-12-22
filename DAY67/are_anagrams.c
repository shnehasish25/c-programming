#include <stdio.h>
#include <string.h>

int are_anagrams(const char *s1, const char *s2) {
    if (strlen(s1) != strlen(s2)) return 0;
    int count[256] = {0};
    for (int i = 0; s1[i]; i++) {
        count[(unsigned char)s1[i]]++;
        count[(unsigned char)s2[i]]--;
    }
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) return 0;
    }
    return 1;
}

int main() {
    printf("silent and listen? %d\n", are_anagrams("silent", "listen"));
    printf("apple and pale? %d\n", are_anagrams("apple", "pale"));
    return 0;
}
