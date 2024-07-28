#include <iostream>
#include <string>

using namespace std;

class Employee {
protected:
    string name;
    int id;
    double salary;

public:
    // Constructor
    Employee(string n, int i, double s) : name(n), id(i), salary(s) {}

    // Getters
    string getName() { return name; }
    int getId() { return id; }
    double getSalary() { return salary; }

    // Setters
    void setName(string n) { name = n; }
    void setId(int i) { id = i; }
    void setSalary(double s) { salary = s; }
};

class Manager : public Employee {
private:
    string department;
    double bonus;

public:
    // Constructor
    Manager(string n, int i, double s, string d, double b) : Employee(n, i, s), department(d), bonus(b) {}

    // Getters
    string getDepartment() { return department; }
    double getBonus() { return bonus; }

    // Setters
    void setDepartment(string d) { department = d; }
    void setBonus(double b) { bonus = b; }
};

class Engineer : public Employee {
private:
    string specialty;
    double hours;

public:
    // Constructor
    Engineer(string n, int i, double s, string sp, double h) : Employee(n, i, s), specialty(sp), hours(h) {}

    // Getters
    string getSpecialty() { return specialty; }
    double getHours() { return hours; }

    // Setters
    void setSpecialty(string sp) { specialty = sp; }
    void setHours(double h) { hours = h; }
};

int main() {
    // Create a Manager instance
    Manager manager("John Doe", 101, 100000.0, "Marketing", 20000.0);
    cout << "Manager Details:" << endl;
    cout << "Name: " << manager.getName() << endl;
    cout << "ID: " << manager.getId() << endl;
    cout << "Salary: " << manager.getSalary() << endl;
    cout << "Department: " << manager.getDepartment() << endl;
    cout << "Bonus: " << manager.getBonus() << endl;

    // Create an Engineer instance
    Engineer engineer("Jane Smith", 202, 80000.0, "Software", 40.0);
    cout << "\nEngineer Details:" << endl;
    cout << "Name: " << engineer.getName() << endl;
    cout << "ID: " << engineer.getId() << endl;
    cout << "Salary: " << engineer.getSalary() << endl;
    cout << "Specialty: " << engineer.getSpecialty() << endl;
    cout << "Hours: " << engineer.getHours() << endl;

    return 0;
}