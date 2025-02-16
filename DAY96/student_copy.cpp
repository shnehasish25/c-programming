#include <iostream>

class Record {
public:
    int id;
    Record(int id) : id(id) {}
    Record(const Record &other) : id(other.id) {}
};

int main() {
    Record r1(55);
    Record r2 = r1;
    std::cout << "r2 ID: " << r2.id << std::endl;
    return 0;
}
