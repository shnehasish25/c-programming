#include <iostream>
#include <tuple>

int main() {
    std::tuple<int, double, std::string> t = {1, 3.14, "PI"};
    std::cout << std::get<0>(t) << " " << std::get<1>(t) << " " << std::get<2>(t) << "\n";
    return 0;
}
