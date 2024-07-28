#include <iostream>
#include <string>
using namespace std;

class Grandfather {
private:
    double propertyValue;
public:
    Grandfather(double value) {
        propertyValue = value;
    }

    void will(Grandson& grandson) {
        grandson.receiveProperty(propertyValue);
    }
};

class Grandson {
private:
    double propertyValue;
public:
    void receiveProperty(double value) {
        if (value > 0) {
            cout << "Received the Property" << endl;
            propertyValue = value;
        } else {
            cout << "Invalid property value" << endl;
        }
    }
};

int main() {
    double propertyValue;
    cout << "Enter the property value: ";
    cin >> propertyValue;

    if (cin.fail()) {
        cout << "Invalid input" << endl;
        return 1;
    }

    Grandfather grandfather(propertyValue);
    Grandson grandson;
    grandfather.will(grandson);

    return 0;
}