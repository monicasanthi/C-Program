#include <iostream>
using namespace std;
class Cube {
public:
    Cube() {
        cout << "Enter the number of terms: ";
        cin >> n;
        cout << "Cube of numbers up to " << n << ":\n";
        for (int i = 1; i <= n; i++) {
            int cub = i * i * i;
            cout << "Number is : " << i << " and the cube of " << i << " is: " << cub << endl;
        }
    }
    Cube(int num) {
        n = num;
        cout << "Cube of numbers up to " << n << ":\n";
        for (int i = 1; i <= n; i++) {
            int cub = i * i * i;
            cout << "Number is : " << i << " and the cube of " << i << " is: " << cub << endl;
        }
    }
private:
    int n;
};
int main() {
    Cube c1; 
    cout << "\n";
    Cube c2(5); 
    return 0;
}