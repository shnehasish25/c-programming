#include <iostream>
#include <sstream>
#include <unordered_map>
#include <vector>

int main() {
    std::string sample = "coding in c and c plus plus is rewarding and fun";
    std::stringstream ss(sample);
    std::string word;
    std::unordered_map<std::string, int> counts;
    while (ss >> word) counts[word]++;
    std::cout << "Unique words: " << counts.size() << std::endl;
    return 0;
}
