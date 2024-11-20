#include <stdio.h>

int main() {
    int scores[] = {88, 72, 95, 61, 84};
    int n = 5;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (scores[j] < scores[j + 1]) {
                int t = scores[j]; scores[j] = scores[j + 1]; scores[j + 1] = t;
            }
        }
    }
    printf("Top score: %d, Second: %d\n", scores[0], scores[1]);
    return 0;
}
