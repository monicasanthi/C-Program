#include <iostream>
using namespace std;

// Forward declarations
class Slab2;
class Slab3;

// Base class
class IncomeTax {
protected:
    double income;

public:
    IncomeTax(double inc) : income(inc) {}

    virtual void TDS() = 0; // Pure virtual function
};

// Derived class for slab 1
class Slab1 : public IncomeTax {
public:
    Slab1(double inc) : IncomeTax(inc) {}

    void TDS() override;
};

// Derived class for slab 2
class Slab2 : public IncomeTax {
public:
    Slab2(double inc) : IncomeTax(inc) {}

    void TDS() override;
};

// Derived class for slab 3
class Slab3 : public IncomeTax {
public:
    Slab3(double inc) : IncomeTax(inc) {}

    void TDS() override;
};

// Definitions

void Slab1::TDS() {
    if (income <= 150000) {
        cout << "No tax" << endl;
    } else {
        // Forward to next slab
        Slab2 nextSlab(income);
        nextSlab.TDS();
    }
}

void Slab2::TDS() {
    if (income <= 300000) {
        double tax = (income - 150000) * 0.10;
        cout << "Tax: " << tax << endl;
    } else {
        // Forward to next slab
        Slab3 nextSlab(income);
        nextSlab.TDS();
    }
}

void Slab3::TDS() {
    if (income <= 500000) {
        double tax = (150000 * 0.10) + (income - 300000) * 0.20;
        cout << "Tax: " << tax << endl;
    } else {
        double tax = (150000 * 0.10) + (200000 * 0.20) + (income - 500000) * 0.30;
        cout << "Tax: " << tax << endl;
    }
}

int main() {
    double income;
    cout << "Enter the total income: ";
    cin >> income;

    Slab1 slab1(income);
    slab1.TDS();

    return 0;
}