#include <iostream>
#include <stdexcept>

int main() {
    try {
        throw std::runtime_error("This is a runtime error");
    } catch (const std::runtime_error& e) {
        std::cerr << "Caught runtime error: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Caught standard exception: " << e.what() << std::endl;
    } catch (...) {
        std::cerr << "Caught unknown exception" << std::endl;
    }
    return 0;
}