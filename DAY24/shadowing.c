#include <stdio.h>

int val = 100;

int main() {
    int val = 200; // shadows global
    printf("Local val = %d\n", val);
    {
        int val = 300; // inner block shadows
        printf("Inner block val = %d\n", val);
    }
    printf("Back to outer local val = %d\n", val);
    return 0;
}
