#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
struct Employee {
    int id;
    string name;
    string position;
};
void saveEmployees(const vector<Employee>& employees, const string& filename) {
    ofstream outFile(filename);
    if (outFile.is_open()) {
        for (const auto& employee : employees) {
            outFile << employee.id << ',' << employee.name << ',' << employee.position << '\n';
        }
        outFile.close();
    } else {
        cerr << "Error opening file for writing." << endl;
    }
}
vector<Employee> loadEmployees(const string& filename) {
    vector<Employee> employees;
    ifstream inFile(filename);
    if (inFile.is_open()) {
        string line;
        while (getline(inFile, line)) {
            size_t pos = 0;
            Employee employee;
            employee.id = stoi(line.substr(0, line.find(',')));
            line.erase(0, line.find(',') + 1);
            employee.name = line.substr(0, line.find(','));
            line.erase(0, line.find(',') + 1);
            employee.position = line;
            employees.push_back(employee);
        }
        inFile.close();
    } else {
        cerr << "Error opening file for reading." << endl;
    }
    return employees;
}
int main() {
    vector<Employee> employees;
    employees = loadEmployees("employees.txt");

    employees.push_back({1, "John Doe", "Software Engineer"});
    employees.push_back({2, "Jane Smith", "Project Manager"});

    saveEmployees(employees, "employees.txt");

    return 0;
}