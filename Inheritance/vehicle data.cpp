#include <iostream>
#include <string>

using namespace std;

class Vehicle {
protected:
    string make;
    string model;
    int year;

public:
    // Constructor
    Vehicle(string m, string mo, int y) : make(m), model(mo), year(y) {}

    // Getters
    string getMake() { return make; }
    string getModel() { return model; }
    int getYear() { return year; }

    // Setters
    void setMake(string m) { make = m; }
    void setModel(string mo) { model = mo; }
    void setYear(int y) { year = y; }
};

class Car : public Vehicle {
private:
    int seatingCapacity;
    string fuelType;

public:
    // Constructor
    Car(string m, string mo, int y, int sc, string ft) : Vehicle(m, mo, y), seatingCapacity(sc), fuelType(ft) {}

    // Getters
    int getSeatingCapacity() { return seatingCapacity; }
    string getFuelType() { return fuelType; }

    // Setters
    void setSeatingCapacity(int sc) { seatingCapacity = sc; }
    void setFuelType(string ft) { fuelType = ft; }
};

class Truck : public Vehicle {
private:
    double payloadCapacity;
    double towingCapacity;

public:
    // Constructor
    Truck(string m, string mo, int y, double pc, double tc) : Vehicle(m, mo, y), payloadCapacity(pc), towingCapacity(tc) {}

    // Getters
    double getPayloadCapacity() { return payloadCapacity; }
    double getTowingCapacity() { return towingCapacity; }

    // Setters
    void setPayloadCapacity(double pc) { payloadCapacity = pc; }
    void setTowingCapacity(double tc) { towingCapacity = tc; }
};

int main() {
    // Create a Car instance
    Car car("Toyota", "Camry", 2022, 5, "Gasoline");
    cout << "Car Details:" << endl;
    cout << "Make: " << car.getMake() << endl;
    cout << "Model: " << car.getModel() << endl;
    cout << "Year: " << car.getYear() << endl;
    cout << "Seating Capacity: " << car.getSeatingCapacity() << endl;
    cout << "Fuel Type: " << car.getFuelType() << endl;

    // Create a Truck instance
    Truck truck("Ford", "F-150", 2020, 1500.0, 5000.0);
    cout << "\nTruck Details:" << endl;
    cout << "Make: " << truck.getMake() << endl;
    cout << "Model: " << truck.getModel() << endl;
    cout << "Year: " << truck.getYear() << endl;
    cout << "Payload Capacity: " << truck.getPayloadCapacity() << endl;
    cout << "Towing Capacity: " << truck.getTowingCapacity() << endl;

    return 0;
}