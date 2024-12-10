#include <stdio.h>
#include <ctype.h>

int main() {
    char s[] = "Room #402, Price: $150!";
    int digits = 0, special = 0;
    for (int i = 0; s[i]; i++) {
        if (isdigit(s[i])) digits++;
        else if (!isalpha(s[i]) && s[i] != ' ') special++;
    }
    printf("Digits: %d, Special chars: %d\n", digits, special);
    return 0;
}
