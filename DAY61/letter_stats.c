#include <stdio.h>
#include <ctype.h>

int main() {
    char s[] = "C is Awesome!";
    int up = 0, low = 0;
    for (int i = 0; s[i]; i++) {
        if (isupper(s[i])) up++;
        if (islower(s[i])) low++;
    }
    printf("Upper: %d, Lower: %d\n", up, low);
    return 0;
}
