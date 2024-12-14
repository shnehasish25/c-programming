#include <stdio.h>
#include <string.h>

int main() {
    char text[] = "GitHub contribution graph";
    if (strstr(text, "graph") != NULL) {
        printf("Contains 'graph'!\n");
    }
    return 0;
}
