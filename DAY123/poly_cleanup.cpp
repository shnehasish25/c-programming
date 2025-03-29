#include <iostream>

class ResourceBase {
public:
    virtual ~ResourceBase() { std::cout << "ResourceBase cleanup\n"; }
};

class SubResource : public ResourceBase {
public:
    ~SubResource() override { std::cout << "SubResource cleanup\n"; }
};

int main() {
    ResourceBase *r = new SubResource();
    delete r;
    return 0;
}
