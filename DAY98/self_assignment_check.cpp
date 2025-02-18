#include <iostream>

class Node {
public:
    int id;
    Node(int id) : id(id) {}
    bool is_same(const Node *other) {
        return this == other;
    }
};

int main() {
    Node n(1);
    std::cout << "Is same: " << n.is_same(&n) << std::endl;
    return 0;
}
