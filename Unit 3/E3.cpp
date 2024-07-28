#include <iostream>
using namespace std;
class Cube {
private:
    int n;
public:
    Cube(int num) {
        cout << "Constructor called" << endl;
        n = num;
    }
    ~Cube() {
        cout << "Destructor called" << endl;
        for (int i = 1; i <= n; i++) {
            int cub = i * i * i;
            cout << "Number is : " << i << " and the cube of " << i << " is: " << cub << endl;
        }
    }
};
int main() {
    int num;
    cout << "Input the number of terms: ";
    cin >> num;
    {
        Cube c(num);
    } 
    return 0;
}