#include <iostream>
#include <vector>

int main() {
    std::vector<int> v = {10, 20, 30};
    int *raw_ptr = v.data();
    std::cout << "First via data(): " << *raw_ptr << std::endl;
    return 0;
}
