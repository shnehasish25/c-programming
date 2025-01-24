#include <stdio.h>

int main() {
    FILE *fp = fopen("output.txt", "r");
    if (!fp) {
        printf("File not found, demo finished.\n");
        return 0;
    }
    char line[100];
    while (fgets(line, sizeof(line), fp)) {
        printf("> %s", line);
    }
    fclose(fp);
    return 0;
}
