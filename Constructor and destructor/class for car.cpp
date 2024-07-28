#include <iostream>
#include <string>
using namespace std;
class Car {
private:
    string brand;
    string model;
    int year;
    int mileage;
public:
    Car(string b, std::string m, int y, int mi) {
        brand = b;
        model = m;
        year = y;
        mileage = mi;
        cout << "Car object created: " << brand << " " << model << " (" << year << ") with " << mileage << " miles\n" << endl;
    }
    ~Car() {
        cout << "Car object destroyed: " << brand << " " << model << " (" << year << ") with " << mileage << " miles" << endl;
    }
    void displayInfo() {
        cout << "Brand: " << brand << ", Model: " << model << ", Year: " << year << ", Mileage: " << mileage << " miles\n" << endl;
    }
};
int main() {
    Car car1("Toyota", "Corolla", 2015, 50000);
    car1.displayInfo();
    Car car2("Honda", "Civic", 2018, 20000);
    car2.displayInfo();
    return 0;
}