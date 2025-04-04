#include <iostream>

template <typename T, int size>
void print_fixed_arr(T (&arr)[size]) {
    for (int i = 0; i < size; i++) std::cout << arr[i] << " ";
    std::cout << std::endl;
}

int main() {
    int nums[] = {1, 2, 3, 4};
    print_fixed_arr(nums);
    return 0;
}
