#include <iostream>

class User {
public:
    static int user_count;
    User() { user_count++; }
    ~User() { user_count--; }
};

int User::user_count = 0;

int main() {
    User u1, u2;
    std::cout << "Active users: " << User::user_count << std::endl;
    return 0;
}
