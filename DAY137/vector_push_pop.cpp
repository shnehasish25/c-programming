#include <iostream>
#include <vector>

int main() {
    std::vector<int> v;
    v.push_back(100);
    v.push_back(200);
    v.push_back(300);
    std::cout << "Back: " << v.back() << std::endl;
    v.pop_back();
    std::cout << "After pop, back: " << v.back() << std::endl;
    return 0;
}
