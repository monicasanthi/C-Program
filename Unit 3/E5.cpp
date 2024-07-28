#include <iostream>
using namespace std;
class Pattern {
public:
    Pattern() {
        cout << "Enter the number of rows: ";
        cin >> n;
        cout << "Enter the number to repeat: ";
        cin >> num;
        displayPattern();
    }
    Pattern(int rows, int repeat) {
        n = rows;
        num = repeat;
        displayPattern();
    }
private:
    int n, num;
    void displayPattern() {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                cout << num << " ";
            }
            cout << endl;
        }
    }
};
int main() {
    Pattern p1; // default constructor
    cout << "\n";
    Pattern p2(5, 3); // parameterized constructor
    return 0;
}