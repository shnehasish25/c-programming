#include <iostream>
#include <fstream>

class FileHandler {
    std::ofstream file;
public:
    FileHandler(const std::string &path) {
        file.open(path);
        std::cout << "File opened (RAII)\n";
    }
    ~FileHandler() {
        if (file.is_open()) file.close();
        std::cout << "File safely closed (RAII destructor)\n";
    }
    void write(const std::string &msg) { file << msg; }
};

int main() {
    {
        FileHandler fh("test_raii.txt");
        fh.write("RAII test line\n");
    }
    return 0;
}
