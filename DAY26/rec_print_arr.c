#include <stdio.h>

void print_arr(int arr[], int size, int idx) {
    if (idx >= size) {
        printf("\n");
        return;
    }
    printf("%d ", arr[idx]);
    print_arr(arr, size, idx + 1);
}

int main() {
    int nums[] = {10, 20, 30, 40, 50};
    print_arr(nums, 5, 0);
    return 0;
}
