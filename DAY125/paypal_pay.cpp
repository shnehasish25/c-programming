#include <iostream>

class PayPalUser {
public:
    std::string email = "user@example.com";
};

int main() {
    PayPalUser u;
    std::cout << "User: " << u.email << std::endl;
    return 0;
}
