#include <iostream>
using namespace std;
class Vehicle {
public:
    virtual void drive() = 0; 
};
class Car : public Vehicle {
public:
    void drive() override {
        cout << "Driving a car..." << std::endl;
        cout << "Shifting gears..." << std::endl;
        cout << "Accelerating..." << std::endl;
    }
};
class Truck : public Vehicle {
public:
    void drive() override {
        cout << "Driving a truck..." << std::endl;
        cout << "Shifting into high gear..." << std::endl;
        cout << "Hauling heavy load..." << std::endl;
    }
};
int main() {
    Car car;
    Truck truck;
    std::cout << "Driving a car:" << std::endl;
    car.drive();
    std::cout << "\nDriving a truck:" << std::endl;
    truck.drive();
    return 0;
}