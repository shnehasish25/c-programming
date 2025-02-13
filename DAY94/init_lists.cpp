#include <iostream>

class Book {
    const std::string isbn;
    int pages;
public:
    Book(std::string code, int p) : isbn(code), pages(p) {}
    void print() { std::cout << "ISBN: " << isbn << ", Pages: " << pages << "\n"; }
};

int main() {
    Book b("978-0131103627", 272);
    b.print();
    return 0;
}
