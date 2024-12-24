#include <stdio.h>
#include <string.h>

int main() {
    char row[] = "101,John,Doe,88.5";
    char *field = strtok(row, ",");
    int col = 1;
    while (field != NULL) {
        printf("Col %d: %s\n", col++, field);
        field = strtok(NULL, ",");
    }
    return 0;
}
