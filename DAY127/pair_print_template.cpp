#include <iostream>

template <typename K, typename V>
struct KeyValue {
    K key;
    V val;
};

int main() {
    KeyValue<std::string, int> item{"Apples", 5};
    std::cout << item.key << ": " << item.val << std::endl;
    return 0;
}
