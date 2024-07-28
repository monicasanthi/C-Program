#include <iostream>
using namespace std;
class Animal {
public:
    virtual void move() = 0;
};
class Bird : public Animal {
public:
    void move() override {
        cout << "Flying..." << endl;
    }
};
class Fish : public Animal {
public:
    void move() override {
        cout << "Swimming..." << endl;
    }
};
int main() {
    Bird bird;
    Fish fish;

    cout << "Bird:" << endl;
    bird.move();

    cout << "\nFish:" << endl;
    fish.move();

    return 0;
}