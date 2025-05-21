#include <iostream>
#include <memory>

int main() {
    std::shared_ptr<int> p1 = std::make_shared<int>(42);
    std::cout << "Count: " << p1.use_count() << std::endl;
    {
        std::shared_ptr<int> p2 = p1;
        std::cout << "Count inside scope: " << p1.use_count() << std::endl;
    }
    std::cout << "Count after scope: " << p1.use_count() << std::endl;
    return 0;
}
