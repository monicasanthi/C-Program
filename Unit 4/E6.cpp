#include <iostream>
using namespace std;
class MyClass {
private:
    int x;
public:
    MyClass(int val) {
        this->x = val; 
    }
    void display() {
        cout << "x = " << this->x << endl; 
    }
};
int main() {
    MyClass obj(20);
    obj.display();
    return 0;
}