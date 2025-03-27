#include <iostream>

class IPrintable {
public:
    virtual void print() const = 0;
    virtual ~IPrintable() {}
};

class Document : public IPrintable {
public:
    void print() const override { std::cout << "Printing document content\n"; }
};

int main() {
    IPrintable *p = new Document();
    p->print();
    delete p;
    return 0;
}
