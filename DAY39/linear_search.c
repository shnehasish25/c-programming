#include <stdio.h>

int linear_search(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) return i;
    }
    return -1;
}

int main() {
    int a[] = {11, 23, 45, 67, 89};
    int idx = linear_search(a, 5, 45);
    printf("Found at index: %d\n", idx);
    return 0;
}
