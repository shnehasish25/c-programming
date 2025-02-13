#include <iostream>

class Account {
    int id;
public:
    explicit Account(int id) : id(id) {}
    int get_id() const { return id; }
};

int main() {
    Account a(102);
    std::cout << "ID: " << a.get_id() << std::endl;
    return 0;
}
