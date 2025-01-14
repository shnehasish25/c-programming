#include <stdio.h>

int main() {
    char *names[] = {"Linux", "macOS", "Windows"};
    char **p = names;
    for (int i = 0; i < 3; i++) {
        printf("%s\n", *(p + i));
    }
    return 0;
}
