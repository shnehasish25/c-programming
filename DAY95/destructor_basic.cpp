#include <iostream>

class Resource {
public:
    Resource() { std::cout << "Acquired resource\n"; }
    ~Resource() { std::cout << "Released resource\n"; }
};

int main() {
    {
        Resource r;
    } // destructor fires here
    std::cout << "Out of scope\n";
    return 0;
}
