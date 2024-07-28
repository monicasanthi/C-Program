#include <iostream>
using namespace std;
class Pattern {
public:
    Pattern() {
        cout << "No argument constructor called" << endl;
        printPattern(5, 1);
    }
    Pattern(int n) {
        cout << "One argument constructor called" << endl;
        printPattern(n, 1);
    }
    Pattern(int n, int num) {
        cout << "Two argument constructor called" << endl;
        printPattern(n, num);
    }
private:
    void printPattern(int n, int num) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                cout << num << " ";
            }
            cout << endl;
        }
    }
};
int main() {
    Pattern p1; // calls no-argument constructor
    cout << endl;
    Pattern p2(3); // calls one-argument constructor
    cout << endl;
    Pattern p3(4, 2); // calls two-argument constructor
    return 0;
}