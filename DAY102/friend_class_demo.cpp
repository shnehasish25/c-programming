#include <iostream>

class Storage {
private:
    int secret_code = 404;
    friend class Admin;
};

class Admin {
public:
    void print(Storage s) {
        std::cout << "Secret code: " << s.secret_code << std::endl;
    }
};

int main() {
    Storage s;
    Admin a;
    a.print(s);
    return 0;
}
