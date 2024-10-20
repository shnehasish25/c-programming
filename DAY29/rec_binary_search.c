#include <stdio.h>

int bsearch_rec(int arr[], int l, int r, int target) {
    if (l > r) return -1;
    int mid = l + (r - l) / 2;
    if (arr[mid] == target) return mid;
    if (arr[mid] > target) return bsearch_rec(arr, l, mid - 1, target);
    return bsearch_rec(arr, mid + 1, r, target);
}

int main() {
    int a[] = {2, 5, 8, 12, 16, 23, 38};
    int idx = bsearch_rec(a, 0, 6, 16);
    printf("16 found at index: %d\n", idx);
    return 0;
}
