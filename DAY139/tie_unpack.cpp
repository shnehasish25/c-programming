#include <iostream>
#include <tuple>

int main() {
    int id; double score;
    auto record = std::make_pair(10, 95.5);
    std::tie(id, score) = record;
    std::cout << "Unpacked: " << id << " with " << score << std::endl;
    return 0;
}
