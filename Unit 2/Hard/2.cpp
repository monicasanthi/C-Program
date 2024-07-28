#include <iostream>
using namespace std;
class Series {
private:
    int limit;
    int fib[100]; // assume max limit is 100

public:
    void input() {
        cout << "Enter the limit: ";
        cin >> limit;
    }

    void show() {
        fib[0] = 0;
        fib[1] = 1;
        cout << fib[0] << " " << fib[1] << " ";
        for (int i = 2; i < limit; i++) {
            fib[i] = fib[i-1] + fib[i-2];
            cout << fib[i] << " ";
        }
        cout << endl;
    }
};
int main() {
    Series s;
    s.input();
    s.show();
    return 0;
}