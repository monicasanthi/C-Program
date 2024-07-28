#include <iostream>
#include <string>
using namespace std;
class Animal {
public:
    virtual void eat() = 0; // pure virtual function
};

class Herbivore : public Animal {
public:
    void eat() override {
        cout << "I'm a herbivore, I eat plants." << endl;
    }
};

class Carnivore : public Animal {
public:
    void eat() override {
        cout << "I'm a carnivore, I eat meat." << endl;
    }
};

int main() {
    Herbivore herbivore;
    Carnivore carnivore;

    cout << "Herbivore eating:" << endl;
    herbivore.eat();

    cout << "\nCarnivore eating:" << endl;
    carnivore.eat();

    return 0;
}