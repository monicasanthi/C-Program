#include <iostream>
#include <string>
using namespace std;
class Book{
private:
    string name;
    int page;

public:
    // Constructor
    Book(std::string n, int p) : name(n), page(p) {
        std::cout << "book created" << name << " (" << page << ")" << endl;
    }
    // Destructor
    ~Book() {
        cout << "book object destroyed: " << name << " (" << page << ")" << endl;
    }
    // Member function to display student information
    void displayInfo() {
        cout << "Name: " << name << ", page: " << page << endl;
    }
};
int main() {
   Book book1("rich dad", 120);
    book1.displayInfo();
    Book book2("Jane Smith", 922);
    book2.displayInfo();
    return 0;
}