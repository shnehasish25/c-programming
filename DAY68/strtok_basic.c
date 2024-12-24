#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "red,green,blue,yellow";
    char *token = strtok(str, ",");
    while (token != NULL) {
        printf("Color: %s\n", token);
        token = strtok(NULL, ",");
    }
    return 0;
}
