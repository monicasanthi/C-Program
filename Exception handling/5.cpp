#include <iostream>

void functionThatThrows() {
    throw std::runtime_error("This is an exception thrown using the throw keyword");
}

int main() {
    try {
        functionThatThrows();
    } catch (const std::exception& e) {
        std::cerr << "Caught exception: " << e.what() << std::endl;
    }
    return 0;
}