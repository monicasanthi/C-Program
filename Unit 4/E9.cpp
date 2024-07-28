#include <iostream>
using namespace std;
class Rectangle {
private:
    int length;
    int breadth;
public:
    void inputData() {
        cout << "Enter the length: ";
        cin >> length;
        cout << "Enter the breadth: ";
        cin >> breadth;
    }
    int calculateArea() {
        return length * breadth;
    }
    void displayArea() {
        cout << "Area: " << calculateArea() << endl;
    }
};
int main() {
    int n;
    cout << "Enter the number of rectangles: ";
    cin >> n;
    Rectangle rect[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter the details of rectangle " << i + 1 << ":" << endl;
        rect[i].inputData();
    }
    for (int i = 0; i < n; i++) {
        rect[i].displayArea();
    }
    return 0;
}