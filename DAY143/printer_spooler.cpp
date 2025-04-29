#include <iostream>
#include <queue>

int main() {
    std::queue<std::string> jobs;
    jobs.push("Document1.pdf");
    jobs.push("Photo.png");
    while (!jobs.empty()) {
        std::cout << "Printing: " << jobs.front() << std::endl;
        jobs.pop();
    }
    return 0;
}
