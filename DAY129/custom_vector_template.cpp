#include <iostream>

template <typename T>
class VectorSimple {
    T *arr;
    int cap, sz;
public:
    VectorSimple(int c = 4) : cap(c), sz(0), arr(new T[c]) {}
    ~VectorSimple() { delete[] arr; }
    void push_back(T val) {
        if (sz == cap) {
            cap *= 2;
            T *temp = new T[cap];
            for (int i = 0; i < sz; i++) temp[i] = arr[i];
            delete[] arr;
            arr = temp;
        }
        arr[sz++] = val;
    }
    int size() const { return sz; }
    T operator[](int i) const { return arr[i]; }
};

int main() {
    VectorSimple<int> v;
    for (int i = 1; i <= 5; i++) v.push_back(i * 10);
    for (int i = 0; i < v.size(); i++) std::cout << v[i] << " ";
    std::cout << std::endl;
    return 0;
}
