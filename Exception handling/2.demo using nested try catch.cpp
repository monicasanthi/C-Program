#include <iostream>

int main() {
    try {
        try {
            throw std::runtime_error("Inner exception");
        } catch (const std::exception& e) {
            std::cout << "Caught inner exception: " << e.what() << std::endl;
            throw; // Rethrow the exception
        }
    } catch (const std::exception& e) {
        std::cerr << "Caught outer exception: " << e.what() << std::endl;
    }
    return 0;
}