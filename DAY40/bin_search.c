#include <stdio.h>

int binary_search(int arr[], int n, int key) {
    int l = 0, r = n - 1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == key) return mid;
        if (arr[mid] < key) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}

int main() {
    int a[] = {3, 9, 14, 19, 25, 31, 42};
    int idx = binary_search(a, 7, 25);
    printf("Found at: %d\n", idx);
    return 0;
}
