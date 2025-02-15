#include <iostream>

class Buffer {
    int *data;
public:
    Buffer(int size) {
        data = new int[size];
        std::cout << "Allocated buffer of size " << size << "\n";
    }
    ~Buffer() {
        delete[] data;
        std::cout << "Cleaned up buffer\n";
    }
};

int main() {
    Buffer b(100);
    return 0;
}
