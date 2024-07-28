#include <iostream>
#include <stdexcept>
class CustomException : public std::runtime_error {
public:
    CustomException(const std::string& message) : std::runtime_error(message) {}
};

int main() {
    try {
        throw CustomException("This is a custom exception");
    } catch (const CustomException& e) {
        std::cerr << "Caught custom exception: " << e.what() << std::endl;
    }
    return 0;
}