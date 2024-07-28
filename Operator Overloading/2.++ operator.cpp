#include <iostream>
using namespace std;
class Counter {
private:
    int value;
public:
    Counter(int v=0) : value(v) {}
    Counter& operator++() {
        ++value;
        return *this; 
    }
    Counter operator++(int) {
        Counter temp = *this; 
        value++; 
        return temp; 
    }
    void display() const {
        cout << "Value: " << value << endl;
    }
};
int main() {
    Counter c1(10);
    cout << "Initial value: ";
    c1.display();
    ++c1; 
    cout << "After prefix increment: ";
    c1.display();
    c1++; 
    cout << "After postfix increment: ";
    c1.display();
    return 0;
}