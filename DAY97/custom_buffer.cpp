#include <iostream>

class DynamicArray {
    int *arr;
    int size;
public:
    DynamicArray(int s) : size(s), arr(new int[s]) {}
    DynamicArray(const DynamicArray &o) : size(o.size), arr(new int[o.size]) {
        for (int i = 0; i < size; i++) arr[i] = o.arr[i];
    }
    ~DynamicArray() { delete[] arr; }
    void set(int i, int v) { arr[i] = v; }
    int get(int i) { return arr[i]; }
};

int main() {
    DynamicArray d1(3);
    d1.set(0, 77);
    DynamicArray d2 = d1;
    std::cout << "d2[0]: " << d2.get(0) << std::endl;
    return 0;
}
