#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> sorted = {2, 4, 6, 8, 10, 12};
    bool exists = std::binary_search(sorted.begin(), sorted.end(), 8);
    std::cout << "8 exists: " << exists << std::endl;
    return 0;
}
