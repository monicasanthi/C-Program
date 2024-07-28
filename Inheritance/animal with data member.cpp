#include <iostream>
#include <string>

using namespace std;

class Animal {
protected:
    string name;
    string species;
    int age;

public:
    // Constructor
    Animal(string n, string s, int a) : name(n), species(s), age(a) {}

    // Getters
    string getName() { return name; }
    string getSpecies() { return species; }
    int getAge() { return age; }

    // Setters
    void setName(string n) { name = n; }
    void setSpecies(string s) { species = s; }
    void setAge(int a) { age = a; }
};

class Cat : public Animal {
private:
    string color;
    string breed;

public:
    // Constructor
    Cat(string n, string s, int a, string c, string b) : Animal(n, s, a), color(c), breed(b) {}

    // Getters
    string getColor() { return color; }
    string getBreed() { return breed; }

    // Setters
    void setColor(string c) { color = c; }
    void setBreed(string b) { breed = b; }
};

class Dog : public Animal {
private:
    double weight;
    string breed;

public:
    // Constructor
    Dog(string n, string s, int a, double w, string b) : Animal(n, s, a), weight(w), breed(b) {}

    // Getters
    double getWeight() { return weight; }
    string getBreed() { return breed; }

    // Setters
    void setWeight(double w) { weight = w; }
    void setBreed(string b) { breed = b; }
};

int main() {
    // Create a Cat instance
    Cat cat("Whiskers", "Felis catus", 3, "Gray", "Siamese");
    cout << "Cat Details:" << endl;
    cout << "Name: " << cat.getName() << endl;
    cout << "Species: " << cat.getSpecies() << endl;
    cout << "Age: " << cat.getAge() << endl;
    cout << "Color: " << cat.getColor() << endl;
    cout << "Breed: " << cat.getBreed() << endl;

    // Create a Dog instance
    Dog dog("Buddy", "Canis lupus familiaris", 5, 20.5, "Golden Retriever");
    cout << "\nDog Details:" << endl;
    cout << "Name: " << dog.getName() << endl;
    cout << "Species: " << dog.getSpecies() << endl;
    cout << "Age: " << dog.getAge() << endl;
    cout << "Weight: " << dog.getWeight() << endl;
    cout << "Breed: " << dog.getBreed() << endl;

    return 0;
}