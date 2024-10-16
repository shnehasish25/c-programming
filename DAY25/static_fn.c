#include <stdio.h>

static int secret_key(void) {
    return 42;
}

int main() {
    printf("Key is: %d\n", secret_key());
    return 0;
}
