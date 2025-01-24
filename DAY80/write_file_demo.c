#include <stdio.h>

int main() {
    FILE *fp = fopen("output.txt", "w");
    if (!fp) return 1;
    fprintf(fp, "Completed 80 days of C Programming!\nMoving to C++ next!\n");
    fclose(fp);
    printf("File written successfully.\n");
    return 0;
}
