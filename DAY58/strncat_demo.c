#include <stdio.h>
#include <string.h>

int main() {
    char s1[20] = "Fast";
    strncat(s1, "ForwardTrack", 7);
    printf("%s\n", s1);
    return 0;
}
