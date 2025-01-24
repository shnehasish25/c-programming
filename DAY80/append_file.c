#include <stdio.h>

int main() {
    FILE *fp = fopen("output.txt", "a");
    if (!fp) return 0;
    fprintf(fp, "Log entry: Day 80 milestone.\n");
    fclose(fp);
    return 0;
}
