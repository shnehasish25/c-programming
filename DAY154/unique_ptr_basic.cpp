#include <iostream>
#include <memory>

class Resource {
public:
    Resource() { std::cout << "Resource created\n"; }
    ~Resource() { std::cout << "Resource destroyed automatically!\n"; }
    void work() { std::cout << "Working...\n"; }
};

int main() {
    std::unique_ptr<Resource> p(new Resource());
    p->work();
    return 0;
}
