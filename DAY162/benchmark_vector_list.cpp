#include <iostream>
#include <vector>
#include <list>
#include <chrono>

int main() {
    const int N = 100000;
    auto t1 = std::chrono::high_resolution_clock::now();
    std::vector<int> v;
    for (int i = 0; i < N; i++) v.push_back(i);
    auto t2 = std::chrono::high_resolution_clock::now();
    auto dur = std::chrono::duration_cast<std::chrono::microseconds>(t2 - t1).count();
    std::cout << "Vector push_back 100k items took: " << dur << " us\n";
    return 0;
}
