#include <iostream>

int main() {
    int n = 5;
    int *arr = new int[n]{10, 20, 30, 40, 50};
    for (int i = 0; i < n; i++) std::cout << arr[i] << " ";
    std::cout << std::endl;
    delete[] arr;
    return 0;
}
