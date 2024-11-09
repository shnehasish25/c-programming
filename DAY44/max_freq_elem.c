#include <stdio.h>

int main() {
    int a[] = {1, 3, 2, 1, 4, 1};
    int n = 6, max_cnt = 0, best = a[0];
    for (int i = 0; i < n; i++) {
        int c = 0;
        for (int j = 0; j < n; j++) if (a[i] == a[j]) c++;
        if (c > max_cnt) { max_cnt = c; best = a[i]; }
    }
    printf("Most frequent: %d (%d times)\n", best, max_cnt);
    return 0;
}
