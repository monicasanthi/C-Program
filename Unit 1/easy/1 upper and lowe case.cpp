#include <iostream>
#include <string>
#include <cctype>
class StringConverter {
public:
    std::string toUpperCase(const std::string& str) {
        std::string upperCaseStr;
        for (char c : str) {
            upperCaseStr += std::toupper(c);
        }
        return upperCaseStr;
    }
    std::string toLowerCase(const std::string& str) {
        std::string lowerCaseStr;
        for (char c : str) {
            lowerCaseStr += std::tolower(c);
        }
        return lowerCaseStr;
    }
};
int main() {
    StringConverter converter;
    std::string inputStr;
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputStr);
    std::string upperCaseStr = converter.toUpperCase(inputStr);
    std::string lowerCaseStr = converter.toLowerCase(inputStr);
    std::cout << "Upper case: " << upperCaseStr << std::endl;
    std::cout << "Lower case: " << lowerCaseStr << std::endl;
    return 0;
}