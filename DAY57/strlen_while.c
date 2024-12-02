#include <stdio.h>

int main() {
    char text[] = "Quick brown fox";
    int i = 0;
    while (text[i]) i++;
    printf("Chars: %d\n", i);
    return 0;
}
