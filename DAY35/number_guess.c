#include <stdio.h>
#include <stdlib.h>

int main() {
    int secret = 42;
    int guess = 30;
    if (guess < secret) printf("Too low!\n");
    else if (guess > secret) printf("Too high!\n");
    else printf("Correct guess!\n");
    return 0;
}
