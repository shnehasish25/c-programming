#include <iostream>

class Beta; // forward decl
class Alpha {
    int val = 10;
    friend bool isEqual(Alpha a, Beta b);
};

class Beta {
    int val = 10;
    friend bool isEqual(Alpha a, Beta b);
};

bool isEqual(Alpha a, Beta b) { return a.val == b.val; }

int main() {
    Alpha a; Beta b;
    std::cout << "Equal? " << isEqual(a, b) << std::endl;
    return 0;
}
