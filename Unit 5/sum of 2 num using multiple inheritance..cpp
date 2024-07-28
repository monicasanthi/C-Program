#include <iostream>
using namespace std;
class ValueX {
protected:
    int x;
public:
    void getValueX() {
        cout << "enter value of x: ";
        cin >> x;
    }
};
class ValueY {
protected:
    int y;
public:
    void getValueY() {
        cout << "enter value of y: ";
        cin >> y;
    }
};
class Sum : public ValueX, public ValueY {
public:
    void calculateSum() {
        getValueX();
        getValueY();
        int sum = x + y;
        cout << "Sum = " << sum << endl;
    }
};
int main() {
    Sum s;
    s.calculateSum();
    return 0;
}