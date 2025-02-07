#include <iostream>

enum class HttpStatus : int {
    OK = 200,
    NotFound = 404,
    InternalError = 500
};

int main() {
    HttpStatus code = HttpStatus::OK;
    std::cout << "Code: " << static_cast<int>(code) << std::endl;
    return 0;
}
