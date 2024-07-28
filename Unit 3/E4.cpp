#include <iostream>
using namespace std;
class Series {
public:
    Series() {
        cout << "Enter the number of terms: ";
        cin >> n;
        cout << "Enter the initial value: ";
        cin >> a;
        cout << "Enter the common difference: ";
        cin >> d;
        sum = calculateSum();
    }
    Series(int num, int init, int diff) {
        n = num;
        a = init;
        d = diff;
        sum = calculateSum();
    }
    void displaySum() {
        cout << "Sum of the series: " << sum << endl;
    }
private:
    int n, a, d, sum;
    int calculateSum() {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += a;
            a += d;
        }
        return sum;
    }
};
int main() {
    Series s1; 
    s1.displaySum();
    cout << "\n";
    Series s2(5, 2, 3); 
    s2.displaySum();
    return 0;
}