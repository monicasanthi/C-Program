#include <iostream>
using namespace std;
class Number {
protected:
    int num;
public:
    void getNumber() {
        cout << "Enter an integer number: ";
        cin >> num;
    }
};
class Square : public Number {
public:
    void calculateSquare() {
        getNumber();
        int square = num * num;
        cout<<"Square of "<<num<<" is: "<<square<<endl;
    }
};
class Cube : public Number {
public:
    void calculateCube() {
        getNumber();
        int cube = num * num * num;
        cout<<"Cube   of "<<num<<" is: "<<cube<<endl;
    }
};
int main() {
    Square s;
    s.calculateSquare();
    Cube c;
    c.calculateCube();
    return 0;
}