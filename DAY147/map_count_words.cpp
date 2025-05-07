#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, int> m;
    m["cat"]++; m["dog"]++; m["cat"]++;
    std::cout << "cat count: " << m["cat"] << std::endl;
    return 0;
}
