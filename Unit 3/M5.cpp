#include <iostream>
#include <string>
using namespace std;
class Binary {
public:
    Binary(int decimal) {
        cout << "Decimal to Binary: ";
        convertToBinary(decimal);
        cout << endl;
    }
    Binary(string binary) {
        cout << "Binary to Decimal: ";
        int decimal = convertToDecimal(binary);
        cout << decimal << endl;
    }
private:
    void convertToBinary(int decimal) {
        if (decimal > 0) {
            convertToBinary(decimal / 2);
            cout << decimal % 2;
        }
    }
    int convertToDecimal(string binary) {
        int decimal = 0;
        for (int i = 0; i < binary.length(); i++) {
            decimal = decimal * 2 + (binary[i] - '0');
        }
        return decimal;
    }
};
int main() {
    Binary b1(12);
    Binary b2("1101");
    return 0;
}