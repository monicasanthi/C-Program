#include <iostream>
using namespace std;
class Cube {
public:
    Cube(int n) {
        cout << "Constructor called" << endl;
        for (int i = 1; i <= n; i++) {
            int cub = i * i * i;
            cout<<"Number is : "<<i<<" and the cube of "<<i<<" is: "<<cub<< endl;
        }
    }
    ~Cube() {
        cout << "Destructor called" << endl;
    }
};
int main() {
    int n;
    cout << "Input the number of terms: ";
    cin >> n;
    Cube c(n);
    return 0;
}