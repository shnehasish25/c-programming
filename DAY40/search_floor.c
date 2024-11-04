#include <stdio.h>

int find_floor(int arr[], int n, int x) {
    int l = 0, r = n - 1, ans = -1;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] <= x) { ans = arr[m]; l = m + 1; }
        else r = m - 1;
    }
    return ans;
}

int main() {
    int a[] = {1, 2, 8, 10, 10, 12, 19};
    printf("Floor of 5: %d\n", find_floor(a, 7, 5));
    return 0;
}
