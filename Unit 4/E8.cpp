#include <iostream>
using namespace std;
class X {
protected:
    int x;
public:
    void setXValue(int val) { x = val; }
    int getXValue() { return x; }
};
class Y {
protected:
    int y;
public:
    void setYValue(int val) { y = val; }
    int getYValue() { return y; }
};
class Sum : public X, public Y {
public:
    void calculateSum() {
        cout << "Sum = " << getXValue() + getYValue() << endl;
    }
};

int main() {
    Sum sum;
    int x, y;
    cout << "Enter value of X: ";
    cin >> x;
    sum.setXValue(x);
    cout << "Enter value of Y: ";
    cin >> y;
    sum.setYValue(y);
    sum.calculateSum();
    return 0;
}