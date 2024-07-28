#include <iostream>
using namespace std;
class Add {
private:
    int num1;
    int num2;
public:
    Add(int n1, int n2) {
        num1 = n1;
        num2 = n2;
    }
    Add operator+(Add &obj) {
        Add temp(0, 0);
        temp.num1 = num1 + obj.num1;
        temp.num2 = num2 + obj.num2;
        return temp;
    }
    void display() {
        cout << "Sum: " << num1 + num2 << endl;
    }
};
int main() {
    Add obj1(10, 20);
    Add obj2(30, 40);

    Add obj3 = obj1 + obj2; // operator overloading
    obj3.display();

    return 0;
}