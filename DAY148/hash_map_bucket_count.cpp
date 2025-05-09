#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<int, int> m;
    for (int i = 0; i < 20; i++) m[i] = i * 2;
    std::cout << "Bucket count: " << m.bucket_count() << "\n";
    std::cout << "Load factor: " << m.load_factor() << "\n";
    return 0;
}
