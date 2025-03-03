#include <iostream>
#include <stdexcept>

class BoundsArray {
    int arr[3] = {1, 2, 3};
public:
    int operator[](int i) const {
        if (i < 0 || i >= 3) throw std::out_of_range("Index out of bounds");
        return arr[i];
    }
};

int main() {
    BoundsArray b;
    std::cout << "b[1] = " << b[1] << std::endl;
    return 0;
}
