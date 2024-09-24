#include <stdio.h>

int main() {
    long long n = 1223334444;
    int freq[10] = {0};
    while (n > 0) {
        freq[n % 10]++;
        n /= 10;
    }
    for (int i = 0; i < 10; i++) {
        if (freq[i] > 0) printf("Digit %d: %d times\n", i, freq[i]);
    }
    return 0;
}
