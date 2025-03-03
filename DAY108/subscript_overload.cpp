#include <iostream>

class SafeArray {
    int data[5] = {10, 20, 30, 40, 50};
public:
    int& operator[](int index) {
        return data[index];
    }
};

int main() {
    SafeArray arr;
    arr[2] = 99;
    std::cout << "arr[2] = " << arr[2] << std::endl;
    return 0;
}
