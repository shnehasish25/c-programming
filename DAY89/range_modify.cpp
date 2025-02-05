#include <iostream>

int main() {
    int nums[] = {2, 4, 6};
    for (int &x : nums) {
        x *= 2;
    }
    for (int x : nums) std::cout << x << " ";
    std::cout << std::endl;
    return 0;
}
