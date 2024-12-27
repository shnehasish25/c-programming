#include <stdio.h>
#include <string.h>

int main() {
    char names[4][20] = {"Zoe", "Alice", "Charlie", "Bob"};
    int n = 4;
    char temp[20];
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
    for (int i = 0; i < n; i++) printf("%s ", names[i]);
    printf("\n");
    return 0;
}
