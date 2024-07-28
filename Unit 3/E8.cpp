#include <iostream>
#include <string>
#include <cmath>
using namespace std;
class BinaryToOctal {
private:
    string binary;
    string octal;
public:
    BinaryToOctal(string bin) {
        binary = bin;
        octal = binaryToOctal(binary);
        cout << "Binary: " << binary << " -> Octal: " << octal << endl;
    }
private:
    string binaryToOctal(string bin) {
        int decimal = 0;
        for (int i = 0; i < bin.length(); i++) {
            decimal += (bin[i] - '0') * pow(2, bin.length() - i - 1);
        }
        string octal = "";
        while (decimal != 0) {
            octal = (decimal % 8 == 0 ? "0" : to_string(decimal % 8)) + octal;
            decimal /= 8;
        }
        return octal;
    }
};
int main() {
    BinaryToOctal b1("1010");
    BinaryToOctal b2("1101");
    BinaryToOctal b3("1111");
    return 0;
}