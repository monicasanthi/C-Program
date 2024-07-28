#include <iostream>
using namespace std;
class Animal {
public:
    virtual void sound() {
        cout << "The animal makes a sound." << endl;
    }
};
class Dog : public Animal {
public:
    void sound() {
        cout << "The dog barks." << endl;
    }
};
class Cat : public Animal {
public:
    void sound() {
        cout << "The cat meows." << endl;
    }
};
int main() {
    Animal* animalPtr = new Animal();
    Dog* dogPtr = new Dog();
    Cat* catPtr = new Cat();

    animalPtr->sound();  // Output: The animal makes a sound.
    dogPtr->sound();     // Output: The dog barks.
    catPtr->sound();     // Output: The cat meows.

    Animal* ptr = new Dog();
    ptr->sound();        // Output: The dog barks.

    ptr = new Cat();
    ptr->sound();        // Output: The cat meows.

    delete animalPtr;
    delete dogPtr;
    delete catPtr;
    delete ptr;

    return 0;
}