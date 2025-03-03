#include <iostream>

class IntRow {
    int r[3] = {7, 8, 9};
public:
    int operator[](int i) { return r[i]; }
};

int main() {
    IntRow row;
    std::cout << row[0] << " " << row[1] << "\n";
    return 0;
}
