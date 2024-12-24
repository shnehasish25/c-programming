#include <stdio.h>
#include <string.h>

int main() {
    char line[] = "Learning C step by step every day";
    char *word = strtok(line, " ");
    while (word != NULL) {
        printf("[%s] ", word);
        word = strtok(NULL, " ");
    }
    printf("\n");
    return 0;
}
