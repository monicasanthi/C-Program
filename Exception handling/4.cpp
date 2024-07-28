#include <iostream>
#include <stdexcept>

int main() {
    try {
        throw std::runtime_error("This is a standard exception");
    } catch (const std::exception& e) {
        std::cerr << "Caught standard exception: " << e.what() << std::endl;
    }
    return 0;
}