#include <iostream>
#include <memory>

struct Node {
    std::weak_ptr<Node> next; // avoids cyclic reference leak
};

int main() {
    auto n = std::make_shared<Node>();
    n->next = n;
    std::cout << "Cycle avoided using weak_ptr!\n";
    return 0;
}
