#include <iostream>
#include <cstring>

class MyString {
    char *buf;
public:
    MyString(const char *s) {
        buf = new char[strlen(s) + 1];
        strcpy(buf, s);
    }
    MyString(const MyString &other) {
        buf = new char[strlen(other.buf) + 1];
        strcpy(buf, other.buf);
    }
    ~MyString() { delete[] buf; }
    void print() { std::cout << buf << std::endl; }
};

int main() {
    MyString s1("Deep copy string");
    MyString s2 = s1;
    s2.print();
    return 0;
}
