#include <iostream>
#include <vector>
#include "todo_item.h"

class TodoList {
    std::vector<TodoItem> items;
    int next_id = 1;
public:
    void add(const std::string &desc) {
        items.push_back({next_id++, desc, false});
    }
    void complete(int id) {
        for (auto &it : items) if (it.id == id) it.completed = true;
    }
    void display() const {
        for (const auto &it : items) {
            std::cout << "[" << (it.completed ? "X" : " ") << "] "
                      << it.id << ": " << it.task << "\n";
        }
    }
};

int main() {
    TodoList todos;
    todos.add("Learn C++ basics");
    todos.add("Master OOP and STL");
    todos.complete(1);
    todos.display();
    return 0;
}
