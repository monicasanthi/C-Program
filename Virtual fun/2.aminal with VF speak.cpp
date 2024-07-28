#include <iostream>
using namespace std;
class Animal {
public:
    virtual void speak() = 0; 
};
class Cat : public Animal {
public:
    void speak() override {
        cout << "Cat: Meow!" << endl;
    }
};

class Dog : public Animal {
public:
    void speak() override {
        cout << "Dog: Woof!" << endl;
    }
};
int main() {
    Cat cat;
    Dog dog;
    cat.speak();
    dog.speak();
    return 0;
}