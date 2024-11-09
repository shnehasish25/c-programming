#include <stdio.h>

int main() {
    int a[] = {1, 2, 8, 3, 2, 2, 2, 5, 1};
    int n = 9, visited[9] = {0};
    for (int i = 0; i < n; i++) {
        if (visited[i]) continue;
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) { visited[j] = 1; count++; }
        }
        printf("%d appears %d times\n", a[i], count);
    }
    return 0;
}
