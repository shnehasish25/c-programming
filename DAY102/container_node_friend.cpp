#include <iostream>

class LinkedList;
class Node {
    int val;
    Node *next = nullptr;
    friend class LinkedList;
public:
    Node(int v) : val(v) {}
};

class LinkedList {
public:
    void print_val(Node *n) {
        std::cout << "Node val: " << n->val << std::endl;
    }
};

int main() {
    Node n(42);
    LinkedList list;
    list.print_val(&n);
    return 0;
}
