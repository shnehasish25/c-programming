#include <stdio.h>

int main() {
    int secret = 7;
    int guess = 1;
    do {
        guess += 2;
    } while (guess < secret);
    printf("Reached or guessed: %d\n", guess);
    return 0;
}
