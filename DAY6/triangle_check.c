#include <stdio.h>

int main() {
    int s1 = 3, s2 = 4, s3 = 5;
    if (s1 + s2 > s3 && s1 + s3 > s2 && s2 + s3 > s1) {
        printf("Valid triangle\n");
    } else {
        printf("Invalid triangle\n");
    }
    return 0;
}
