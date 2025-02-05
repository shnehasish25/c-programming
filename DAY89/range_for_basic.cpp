#include <iostream>

int main() {
    int nums[] = {1, 2, 3, 4, 5};
    for (int x : nums) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
    return 0;
}
