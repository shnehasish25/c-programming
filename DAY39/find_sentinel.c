#include <stdio.h>

int sentinel_search(int arr[], int n, int key) {
    int last = arr[n - 1];
    arr[n - 1] = key;
    int i = 0;
    while (arr[i] != key) i++;
    arr[n - 1] = last;
    if (i < n - 1 || arr[n - 1] == key) return i;
    return -1;
}

int main() {
    int a[] = {10, 20, 30, 40, 50};
    printf("Index of 30: %d\n", sentinel_search(a, 5, 30));
    return 0;
}
