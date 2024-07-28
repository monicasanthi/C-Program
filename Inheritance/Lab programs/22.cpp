#include <iostream>
using namespace std;

class Celsius {
private:
    double temp;

public:
    Celsius(double t = 0) : temp(t) {}

    void display() {
        cout << "Temperature in Celsius: " << temp << " degree C" << endl;
    }

    double getTemp() {
        return temp;
    }

    void setTemp(double t) {
        temp = t;
    }

    operator class Fahrenheit();
};

class Fahrenheit {
private:
    double temp;

public:
    Fahrenheit(double t = 0) : temp(t) {}

    void display() {
        cout << "Temperature in Fahrenheit: " << temp << " degree F" << endl;
    }

    void setTemp(double t) {
        temp = t;
    }

    operator class Celsius() {
        Celsius c;
        c.setTemp((temp - 32.0) * 5.0 / 9.0);
        return c;
    }
};

Celsius::operator class Fahrenheit() {
    Fahrenheit f;
    f.setTemp((temp * 9.0 / 5.0) + 32.0);
    return f;
}

int main() {
    Celsius c(30.0);
    c.display();

    Fahrenheit f = c;  // Convert Celsius to Fahrenheit
    f.display();

    Celsius c2 = f;  // Convert Fahrenheit back to Celsius
    cout << "Converted back to Celsius: ";
    c2.display();

    return 0;
}