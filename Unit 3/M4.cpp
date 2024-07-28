#include <iostream>
using namespace std;
class FloydsTriangle {
public:
    FloydsTriangle(int n) {
        this->n = n;
        printFloydsTriangle();
    }
    ~FloydsTriangle() {
        cout << "Destructor called." << endl;
    }
private:
    int n;
    void printFloydsTriangle() {
        int num = 1;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                cout << num << " ";
                num++;
            }
            cout << endl;
        }
    }
};
int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    FloydsTriangle ft(n);
    return 0;
}